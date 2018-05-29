a.out: main.o functions.o
	g++ main.o functions.o
main.o: main.cpp main.h
	g++ -c -O2 -flto main.cpp
functions.o: functions.cpp main.h
	g++ -c -O2 -flto functions.cpp
clean: 
	rm *.o a.out
.PHONY: clean
