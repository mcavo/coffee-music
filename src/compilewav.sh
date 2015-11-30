#!/bin/bash
if [ -f $1.cof ];
then

	./parser < $1.cof > prewav.c
	./makewav
	if [ -f prewav.c ];
	then
		echo "Making magic..."
		gcc -o $1 postwav.c wavfile.c
		./$1
		rm -f $1
		rm -f postwav.c
		rm -f prewav.c
		mv ec1150e.wav $1.wav
	else
		echo " "
	fi	
else
	echo "File $1.cof does not exist."
fi