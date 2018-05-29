all: rozw.s

rozw.s: rozw.c
	gcc -S rozw.c

run:
	cat rozw.s

.PHONY: clean
clean:
	rm rozw.s