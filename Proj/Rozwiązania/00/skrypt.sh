#!/bin/bash

g++ -O0 00_gotta_go_fast.cpp -o 0.out
g++ -Og 00_gotta_go_fast.cpp -o g.out
g++ -O1 00_gotta_go_fast.cpp -o 1.out
g++ -O2 00_gotta_go_fast.cpp -o 2.out
g++ -O3 00_gotta_go_fast.cpp -o 3.out
g++ -Ofast 00_gotta_go_fast.cpp -o f.out
g++ -Os 00_gotta_go_fast.cpp -o s.out

time for i in `seq 1 10`;
    	do
            ./0.out
        done

time for i in `seq 1 10`;
    	do
            ./g.out
        done

time for i in `seq 1 10`;
    	do
            ./1.out
        done

time for i in `seq 1 10`;
    	do
            ./s.out
        done

time for i in `seq 1 10`;
    	do
            ./2.out
        done

time for i in `seq 1 10`;
    	do
            ./3.out
        done

time for i in `seq 1 10`;
    	do
            ./f.out
        done