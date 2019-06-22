all:
	yacc -d syntax.y 
	lex scanner.l
	cc -o syn lex.yy.c y.tab.c