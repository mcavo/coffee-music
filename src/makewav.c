#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
	FILE *prewav, *postwav;
	prewav = fopen("prewav.c","r");

	int c;
	int i=0;
	char aux[5];
	while(i<4 && (c = fgetc(prewav))!= EOF){
		aux[i]=c;
		i++;
	}
	if(i==4 && strcmp(aux, "int ")==0){
		postwav = fopen("postwav.c", "w");
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
		printf("Su programa no compila\n");
		remove("prewav.c");
		exit(1);
	}
}