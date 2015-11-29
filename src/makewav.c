#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
	FILE *prewav, *postwav;
	prewav = fopen("prewav.c","r");
	postwav = fopen("postwav.c", "w");

	int c;
	int i=0;
	char aux[5];
	while((c = fgetc(prewav))!= EOF && i<4){
		aux[i]=c;
	}
	if(i==4 && strcmp(aux, "int ")){
		fputs("#include <stdio.h>\n", postwav);
		fputs("#include <string.h>\n", postwav);
		fputs("#include <stdlib.h>\n", postwav);
		fputs("#include <math.h>\n", postwav);
		fputs("#include <time.h>\n", postwav);
		fputs("#include <errno.h>\n", postwav);
		fputs("#include \"wavfile.h\"\n", postwav);
		fputs("#include \"getnum.h\"\n", postwav);
		fputs(aux, postwav);
		while((c = fgetc(prewav))!= EOF){
			fputc(c,postwav);
		}
		fclose(prewav);
		fclose(postwav);
	}else{
		printf("SYNTAX ERROR\n");
		exit(1);
	}
}