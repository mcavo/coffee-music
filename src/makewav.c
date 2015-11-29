#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
	FILE *prewav, *postwav;
	prewav = fopen("prewav.c","r");
	postwav = fopen("postwav.c", "w");

	int c;
	fputs("#include <stdio.h>\n", postwav);
	fputs("#include <string.h>\n", postwav);
	fputs("#include <stdlib.h>\n", postwav);
	fputs("#include <math.h>\n", postwav);
	fputs("#include <time.h>\n", postwav);
	fputs("#include <errno.h>\n", postwav);
	fputs("#include \"wavfile.h\"\n", postwav);
	fputs("#include \"getnum.h\"\n", postwav);
	while((c = fgetc(prewav))!= EOF){
		fputc(c,postwav);
		}
	}
	fclose(prewav);
	fclose(postwav);
}