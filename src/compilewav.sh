#!/bin/bash
./parser < $1.cof > prewav.c
./makewav
if [ -f prewav.c ];
then
	gcc -o $1 postwav.c wavfile.c
	./$1
	rm -f prewav.c
	rm -f postwav.c
else
	echo " "
fi