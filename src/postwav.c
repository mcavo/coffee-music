#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <errno.h>
#include "wavfile.h"
int main(void) {
 FILE * music = wavfile_open("ec1150e.wav");
int a = 1;
int i;
switch ( a )
{
case 1 : {
for ( i = 0 ; ( ( i ) != ( 2 ) ) ; i = ( i ) + ( 1 ) )
{
wavfile_write_music( music, "EEES");

}

}case 2 : {
wavfile_write_music( music, "EGCDE");

}case 5 : {
while ( ( ( ( i ) <= ( 8 ) ) || 0 ) )
{
wavfile_write_music( music, "S");
i = ( i ) * ( 2 );

}

}default : 
{
if ( ( i ) >= ( 2 ) )
{
wavfile_write_music( music, "FFF");

}

}
}char* b;
b = "EEGGEDC";
wavfile_write_music( music, "SFFEES");
wavfile_write_music( music, b);

 wavfile_close(music); 
 return 0;
}
