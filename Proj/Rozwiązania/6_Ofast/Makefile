all: rozwfast.out rozwO3.out

rozwfast.out: rozw.c ofast.c
	gcc -Ofast rozw.c ofast.c -o rozwfast.out

rozwO3.out: rozw.c ofast.c
	gcc -O3 rozw.c ofast.c -o rozwO3.out

run:	
	./rozwO3.out
	./rozwfast.out

.PHONY: clean
	
clean:
	rm rozwfast.out rozwO3.out
