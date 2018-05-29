all: O0.s Ofast.s a.out

O0.s:
	gcc -S main.c -o O0.s
Ofast.s:
	gcc -S -Ofast main.c -o Ofast.s
a.out:
	gcc -pg test.c

run:	
	./a.out
	gprof -d -b
	
.PHONY: clean
clean:
	rm  a.out Ofast.s O0.s
