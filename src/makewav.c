#include <stdio.h>
#include <string.h>
#include <stdlib.h>


enum states{READING, REPLACING, MAIN};
int 
main() {
	FILE *prewav, *postwav;
	prewav = fopen("prewav.c","r");
	postwav = fopen("postwav.c", "w");
	int chr;
	char name[100];
	int i = 0;
	enum states state = READING;
	fputs("#include <stdio.h>\n", postwav);
	fputs("#include <string.h>\n", postwav);
	fputs("#include <stdlib.h>\n", postwav);
	fputs("#include <math.h>\n", postwav);
	fputs("#include <time.h>\n", postwav);
	fputs("#include <errno.h>\n", postwav);
	fputs("#include \"wavfile.h\"\n", postwav);
	fputs("#include \"getnum.h\"\n", postwav);
	while((chr = fgetc(prewav))!= EOF){
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
					fputs(name, postwav);
				}
				else {
					if(chr == '?') {
						state = READING;
					}
					else {
						fputc(chr, postwav);
					}
				}
				break;
			}
			case MAIN: {
				if(chr == '~'){
					chr = '_';
				}
				fputc(chr, postwav);
				break;
			}	
		}
	}
	fclose(prewav);
	fclose(postwav);
}