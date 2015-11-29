./parser < $1.cof > prewav.c
./makewav
gcc -o $1 postwav.c getnum.c
rm -f postwav.c
rm -f prewav.c
