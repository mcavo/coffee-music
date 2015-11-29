#include <stdio.h>
#include <string.h>
#include <stdlib.h>

enum states{READING, REPLACING, MAIN};
int 
main() {
	FILE * aux, *output;
	aux = fopen("aux.c","r");
	output = fopen("output.c", "w");
	int chr;
	char name[100];
	int i = 0;
	enum states state = READING;
	fputs("#include <stdio.h>\n", output);
	fputs("#include <string.h>\n", output);
	fputs("#include <stdlib.h>\n", output);
	fputs("#include \"getnum.h\"\n", output);
	while((chr = fgetc(aux))!= EOF){
		switch(state){
			case READING: {
				if(chr == '\n') {
					name[i] = '\0';
					i = 0;
					state = REPLACING;
				}
				else {
					if(chr == '\''){
						state = MAIN;
					}
					else {
						name[i]=chr;
						i++;
					}
				}
				break;
			}
			case REPLACING: {
				if(chr =='~'){
					fputs(name, output);
				}
				else {
					if(chr == '?') {
						state = READING;
					}
					else {
						fputc(chr, output);
					}
				}
				break;
			}
			case MAIN: {
				if(chr == '~'){
					chr = '_';
				}
				fputc(chr, output);
				break;
			}	
		}
	}
	fclose(aux);
	fclose(output);
}