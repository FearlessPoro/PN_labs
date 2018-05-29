#include <stdio.h>
int global1 = 10;
float global2 = 20.25;

int main()
{
	int local1 = 100;
	float local2 = 200.25;
	int result1 = global1 + local1;
	float result2 = global2 + local2;
	printf("The results are %d and %f\n", result1, result2);
	return 0;
}

/*
1) Sprawdź kod maszynowy powstały z kompilacji programu (np. zatrzymaj gcc przed wykonaniem asemblacji, użyj objdump lub wejdź na stronę godbolt) 
2) Sprawdź w jaki sposób kompilator obsługuje zmienne lokalne oraz globalne (gdzie oraz w jaki sposób są przechowywane, oraz jak są obsługiwane w trakcie trwania programu) (odpowiedź: zmienne globalne są zawsze trzymane osobno w sekcji .data, lokalne wrzucane są na stos)
3) Dodaj flagę optymalizacji np. O3 - czy są widoczne różnice pomiędzy traktowaniem zmiennych globalnych oraz lokalnych? (odpowiedź: lokalne zmienne mogą być ładowane od razu do rejestrów, jako stałe, brak wrzucania na stos)
4) Zamień zmienne globalne na lokalne, sprawdź kod assemblera z włączoną flagą O3, które linie kodu zostały wykonane w trakcie kompilacji? (odpowiedź: wszystkie poza printf, kompilator może korzystać z takich Copy propagation CSE i constant folding)
*/