/*
A simple sound library for CSE 20211 by Douglas Thain
For course assignments, you should not change this file.
For complete documentation, see:
http://www.nd.edu/~dthain/courses/cse20211/fall2013/wavfile
*/

#include "wavfile.h"

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <errno.h>

// 								C 		C# 		  D 	   D# 		E 		 F 		  F# 	   G 	    G# 		A 	    A# 		 B
double frequencies[NOTES] = {261.626, 277.183, 293.665, 311.127, 329.628, 349.228, 369.994, 391.995, 415.305, 440.0, 466.164, 493.883, 20000, 523.251, 554.365, 587.330, 622.254, 659.255, 698.456, 739.989, 783.991,830.609,880.000,932.328, 987.767};

struct wavfile_header {
	char	riff_tag[4];
	int	riff_length;
	char	wave_tag[4];
	char	fmt_tag[4];
	int	fmt_length;
	short	audio_format;
	short	num_channels;
	int	sample_rate;
	int	byte_rate;
	short	block_align;
	short	bits_per_sample;
	char	data_tag[4];
	int	data_length;
};

FILE * wavfile_open( const char *filename )
{
	struct wavfile_header header;

	int samples_per_second = WAVFILE_SAMPLES_PER_SECOND;
	int bits_per_sample = 16;

	strncpy(header.riff_tag,"RIFF",4);
	strncpy(header.wave_tag,"WAVE",4);
	strncpy(header.fmt_tag,"fmt ",4);
	strncpy(header.data_tag,"data",4);

	header.riff_length = 0;
	header.fmt_length = 16;
	header.audio_format = 1;
	header.num_channels = 1;
	header.sample_rate = samples_per_second;
	header.byte_rate = samples_per_second*(bits_per_sample/8);
	header.block_align = bits_per_sample/8;
	header.bits_per_sample = bits_per_sample;
	header.data_length = 0;

	FILE * file = fopen(filename,"w+");
	if(!file) return 0;

	fwrite(&header,sizeof(header),1,file);

	fflush(file);

	return file;

}

void wavfile_write( FILE *file, short data[], int length )
{
	fwrite(data,sizeof(short),length,file);
}

void wavfile_close( FILE *file )
{
	int file_length = ftell(file);

	int data_length = file_length - sizeof(struct wavfile_header);
	fseek(file,sizeof(struct wavfile_header) - sizeof(int),SEEK_SET);
	fwrite(&data_length,sizeof(data_length),1,file);

	int riff_length = file_length - 8;
	fseek(file,4,SEEK_SET);
	fwrite(&riff_length,sizeof(riff_length),1,file);

	fclose(file);
}

void wavfile_write_music( FILE *file, char* music){
	int i;
	char nota[3];
	for(i=0; music[i]!= 0; i++){
		if(music[i+1]=='#' || music[i+1]=='b'){
			nota[0] = music[i];
			nota[1] = music[++i]; 
			nota[2] = 0;
		}else{
			nota[0] = music[i];
			nota[1] = 0; 
			nota[2] = 0;
		}
		wavfile_write_note(file, nota);
	}
	return;
}

void wavfile_write_note( FILE *file, char *nota) {
	if ( file==NULL || nota==NULL ) {
		printf("couldn't open sound.wav for writing: %s",strerror(errno));
	}
	const int NUM_SAMPLES = (WAVFILE_SAMPLES_PER_SECOND*0.5);
	short waveform[NUM_SAMPLES];
	int volume = 32000;
	int length = NUM_SAMPLES;
	int i,j;
	//Y asi el .wav sean las 12 notas del vector frequencies (las 7 mas sostenidos)
	// C C# D D# E F F# G G# A A# B
	if(strcmp(nota,"C")==0)
		j = 0;
	else if(strcmp(nota,"Cb")==0)
		j = 11;
	else if(strcmp(nota,"C#")==0)
		j = 1;
	else if(strcmp(nota,"D")==0)
		j = 2;
	else if(strcmp(nota,"Db")==0)
		j = 1;
	else if(strcmp(nota,"D#")==0)
		j = 3;
	else if(strcmp(nota,"E")==0)
		j = 4;
	else if(strcmp(nota,"Eb")==0)
		j = 3;
	else if(strcmp(nota,"F")==0)
		j = 5;
	else if(strcmp(nota,"Fb")==0)
		j = 4;
	else if(strcmp(nota,"F#")==0)
		j = 6;
	else if(strcmp(nota,"G")==0)
		j = 7;
	else if(strcmp(nota,"Gb")==0)
		j = 6;
	else if(strcmp(nota,"G#")==0)
		j = 8;
	else if(strcmp(nota,"A")==0)
		j = 9;
	else if(strcmp(nota,"Ab")==0)
		j = 8;
	else if(strcmp(nota,"A#")==0)
		j = 10;
	else if(strcmp(nota,"B")==0)
		j = 11;
	else if(strcmp(nota,"Bb")==0)
		j = 10;
	else if(strcmp(nota,"S")==0)
		j = 12;
	else if(strcmp(nota,"C5")==0)
		j = 13;
	else if(strcmp(nota,"Cb5")==0)
		j = 24;
	else if(strcmp(nota,"C#5")==0)
		j = 14;
	else if(strcmp(nota,"D5")==0)
		j = 15;
	else if(strcmp(nota,"Db5")==0)
		j = 14;
	else if(strcmp(nota,"D#5")==0)
		j = 16;
	else if(strcmp(nota,"E5")==0)
		j = 17;
	else if(strcmp(nota,"Eb5")==0)
		j = 16;
	else if(strcmp(nota,"F5")==0)
		j = 18;
	else if(strcmp(nota,"Fb5")==0)
		j = 17;
	else if(strcmp(nota,"F#5")==0)
		j = 19;
	else if(strcmp(nota,"G5")==0)
		j = 20;
	else if(strcmp(nota,"Gb5")==0)
		j = 19;
	else if(strcmp(nota,"G#5")==0)
		j = 21;
	else if(strcmp(nota,"A5")==0)
		j = 22;
	else if(strcmp(nota,"Ab5")==0)
		j = 21;
	else if(strcmp(nota,"A#5")==0)
		j = 23;
	else if(strcmp(nota,"B5")==0)
		j = 24;
	else if(strcmp(nota,"Bb5")==0)
		j = 23;

	for(i=0;i<length;i++) {
		double t = (double) i / WAVFILE_SAMPLES_PER_SECOND;
		waveform[i] = volume*sin(frequencies[j]*t*2*M_PI);
	}
	wavfile_write(file,waveform,length);
}


