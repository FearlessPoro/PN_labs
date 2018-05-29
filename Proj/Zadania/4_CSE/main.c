#include <stdio.h>
void funct1(int a, int b)
{
int c = a * b;
int d = (a * b) / 5;
int e = 500 / (a * b);
printf("The results are c=%d d=%d e=%d\n", c, d, e);
}

// // wersja prostsza (z optymalizacja mnozenia zamiast dzielenia)
// #include <stdio.h>
// void funct1(int a, int b)
// {
// int c = a * b;
// int d = (a * b) * 5;
// int e = 500 *(a * b);
// printf("The results are c=%d d=%d e=%d\n", c, d, e);
// }

/*
1) Porónaj kod maszynowy powstały w wyniku kompilacji z flagami O0 oraz O3
*/