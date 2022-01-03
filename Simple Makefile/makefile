#gd="gcc -ansi -pedantic-errors -Wall -Wextra -g"
CC = gcc
CFLAGS = -ansi -pedantic-errors -Wall -Wextra -g
foo.o:foo.c

foo_test.o:foo_test.c

lib:foo_test.o
	ar r libfoo.a foo_test.o

test:foo_test.o
	$(CC)  foo_test.o  $(CFLAGS) -o fooer_testr.out

clean:
	rm *.o *.gch *.out libfoo.a
