#include <stdio.h>

int sums(int i)
{
	int j, sum = 0;
	for(j = 1; j <= i; j++)
		sum = sum + j;
	return sum;
}

int main()
{	
	volatile unsigned int sum = 0;;
	for (int j = 0; j < 10; j++)
	{	
		int i = 100000000;
		sum += sums(i);
	}

	volatile int k=0;
	printf("Done %d", sum);
	return 0;
}

/*
1) Sprawdź kod maszynowy powstały z kompilacji programu za pomocą clang oraz gcc bez flag kompilacji, 
przeanalizuj ilość instrukcji warunkowych oraz częstotliwość ich wywołania, jakie wady widać? (odpowiedź: każde wywołanie pętli powoduje sprawdzenie warunku) 
2) Wykonaj optymalizacje -O1 w compilatorze clang, co stało się z pętlą? Porównaj kod zoptymalizowany za pomocą gcc z flagą -O3 
(odpowiedź: program zamienił sumowanie w pętli na mniej skomplikowany wzór, zmniejszajac ilość operacji oraz porównań (do 1). 
gcc aktualnie jest w stanie doprowadzić tylko do sytuacji w której próbuje przewidzieć wynik i obliczyć jego wstępną wartość, 
mimo wszystko potrzebuje dużo więcej kodu oraz występuje możliwość wystąpienia wielu porównań. Clang w przeciwnienstwie do gcc wykorzystuje 
rozwijanie petli
3) porównaj czas wykonania programu stosując różne flagi gcc oraz clang
4) porównaj rozmiar pliku wykowywalnego
*/