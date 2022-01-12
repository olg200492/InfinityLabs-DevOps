CC = gcc
CFLAGS = -g

lib:stack_test.o
	ar -r dslib.a stack.h stack_test.o

test:stack_test.o stack.o
	$(CC)  stack_test.o stack.o $(CFLAGS) -o stack_testr.out

stack.o:stack.c

stack_test.o:stack_test.c




clean:
	rm -f *.o *.gch *.out dslib.a
