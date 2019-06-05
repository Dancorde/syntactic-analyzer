all:
	lex scanner.l
	gcc -g scanner.c lex.yy.c hash.c -o scanner

run: all
	./scanner < ./tests/test1.in > ./tests/test1.out
	./scanner < ./tests/test2.in > ./tests/test2.out
	./scanner < ./tests/test3.in > ./tests/test3.out
	./scanner < ./tests/test4.in > ./tests/test4.out

debug: all
	valgrind --leak-check=full --show-leak-kinds=all ./scanner < ./tests/test1.in > ./tests/test1.out
	valgrind --leak-check=full --show-leak-kinds=all ./scanner < ./tests/test2.in > ./tests/test2.out
	valgrind --leak-check=full --show-leak-kinds=all ./scanner < ./tests/test3.in > ./tests/test3.out
	valgrind --leak-check=full --show-leak-kinds=all ./scanner < ./tests/test4.in > ./tests/test4.out
