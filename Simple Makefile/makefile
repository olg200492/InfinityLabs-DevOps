foo.o:
	gcc -c -gd foo.h foo.c

lib:foo.o,foo.c,foo_test.c
	ar r libfoo.a foo.o foo.c foo_test.c

test:
	gcc -c -gd foo.c foo_test.c -o fooer_testr.out

clean:
	rm foo.o fooer_testr
