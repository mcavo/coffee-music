#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <errno.h>
#include "wavfile.h"
#include "getnum.h"
int main(void) {
 FILE * music = wavfile_open("music.wav");
int a = 0;
char* la = "GCGC";
wavfile_write_music( music, "ABCD");
 wavfile_close(music); 
 return 0;
}
