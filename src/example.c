/*
This example program makes use of the simple
sound library to generate a sine wave and write the
output to sound.wav.
For complete documentation on the library, see:
http://www.nd.edu/~dthain/courses/cse20211/fall2013/wavfile
Go ahead and modify this program for your own purposes.
*/


#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <errno.h>

#include "wavfile.h"

const int NUM_SAMPLES = (WAVFILE_SAMPLES_PER_SECOND);

int main()
{
	short waveform[NUM_SAMPLES];
	//En orden, las frecuencias en el vector frec corresponden a:
	// DO RE MI FA SOL LA SI
	// C D E F G A B
	double frec[7] = {261.6, 293.7, 329.6, 349.2, 392.0, 440.0, 493.9};
	double frequency = frec[0];
	int volume = 32000;
	int length = NUM_SAMPLES;
	int i,j;


	FILE * f = wavfile_open("sound.wav");
	if(!f) {
		printf("couldn't open sound.wav for writing: %s",strerror(errno));
		return 1;
	}
		

	//Agrego ciclo para formar una waveform por cada nota de la escala
	//Y asi el sound.wav sean las 7 notas de la escala
	for(j=0;j<7;j++){

		for(i=0;i<length;i++) {
			double t = (double) i / WAVFILE_SAMPLES_PER_SECOND;
			waveform[i] = volume*sin(frec[j]*t*2*M_PI);
		
		}
		
		wavfile_write(f,waveform,length);

	}

	wavfile_close(f);

	return 0;
}
