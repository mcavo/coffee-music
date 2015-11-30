all:
	yacc -d coffee-music.y
	lex coffee-music.l
	gcc -o parser lex.yy.c y.tab.c -ly
	gcc -o makewav makewav.c
	
clean:
	rm -f prewav.c
	rm -f parser
	rm -f makewav
	rm -f lex.yy.c
	rm -f y.tab.c
	rm -f y.tab.h
	rm -f postwav.c
	rm -f *.wav