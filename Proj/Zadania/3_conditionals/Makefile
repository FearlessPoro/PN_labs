all: main.s

main.s: main.c
	gcc -S main.c

run: main.s
	cat main.s

.PHONY: clean
clean:
	rm main.s