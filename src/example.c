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
	//En orden, las frecuencias en el vector frec corresponden a las notas y notas con sostenidos (MI y SI no tienen sostenido):
	// DO DO# RE RE# MI FA FA# SOL SOL# LA LA# SI
	// C C# D D# E F F# G G# A A# B
	double frequencies[NOTES] = {261.626, 277.183, 293.665, 311.127, 329.628, 349.228, 369.994, 391.995, 415.305, 440.0, 466.164, 493.883};

	int volume = 32000;
	int length = NUM_SAMPLES;
	int i,j;


	FILE * f = wavfile_open("sound.wav");
	if(!f) {
		printf("couldn't open sound.wav for writing: %s",strerror(errno));
		return 1;
	}
		

	//Agrego ciclo para formar una waveform por cada nota de la escala
	//Y asi el sound.wav sean las 12 notas del vector frequencies (las 7 mas sostenidos)
	for(j=0;j<NOTES;j++){

		for(i=0;i<length;i++) {
			double t = (double) i / WAVFILE_SAMPLES_PER_SECOND;
			waveform[i] = volume*sin(frequencies[j]*t*2*M_PI);
		
		}
		
		wavfile_write(f,waveform,length);

	}

	wavfile_close(f);

	return 0;
}
