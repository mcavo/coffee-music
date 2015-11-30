#!/bin/bash
./parser < $1.cof > prewav.c
./makewav
if [ -f prewav.c ];
then
	gcc -o $1 postwav.c wavfile.c
	./$1
	rm -f $1
	mv ec1150e.wav $1.wav
else
	echo " "
fi