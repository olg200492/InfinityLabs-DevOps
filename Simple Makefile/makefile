
CC = gcc
CFLAGS = -ansi -pedantic-errors -Wall -Wextra -g
test:foo_test.o
	$(CC)  foo_test.o  $(CFLAGS) -o fooer_testr.out

foo.o:foo.c

foo_test.o:foo_test.c

lib:foo_test.o
	ar -r libfoo.a foo_test.o


clean:
	rm -f *.o *.gch *.out libfoo.a
