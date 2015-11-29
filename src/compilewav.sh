./parser < $1.cof > prewav.c
./makewav
gcc -o $1 postwav.c wavfile.c
./$1
