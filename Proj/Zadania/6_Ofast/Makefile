all: mainO3.out mainOfast.out O0.s O3.s Ofast.s

mainO3.out: main.c ofast.c
	gcc -O3 main.c ofast.c -o mainO3.out

mainOfast.out: main.c ofast.c
	gcc -Ofast main.c ofast.c -o mainOfast.out

O0.s: ofast.c
	gcc -O0 -S ofast.c -o O0.s

O3.s: ofast.c
	gcc -O3 -S ofast.c -o O3.s

Ofast.s: ofast.c
	gcc -Ofast -S ofast.c -o Ofast.s

run:	
	./mainO3.out
	./mainOfast.out

.PHONY: clean
	
clean:
	rm mainO3.out mainOfast.out O0.s O3.s Ofast.s
