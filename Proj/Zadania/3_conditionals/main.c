#pragma GCC optimize("O3")
int conditiontest(int test1, int test2)
{
	int result;
	if (test1 > test2)
	{
		result = test1;
	} 
	else if (test1 < test2)
	{
		result = test2;
	}
	else
	{
		result = 0;
	}
	return result;
}

#pragma GCC optimize("O0")
int conditiontest2(int test1, int test2)
{
	int result;
	if (test1 > test2)
	{
		result = test1;
	} 
	else if (test1 < test2)
	{
		result = test2;
	}
	else
	{
		result = 0;
	}
	return result;
}


/*
1) porównaj kod maszynowy flag O0 oraz O1
2) postaraj się zmienić kod źródłowy tak, aby przypominał on w działaniu zoptymalizowaną wersję
(pomiń wpływ kopiowania zmiennych do rejestrów oraz operacje na stosie), 
tj. doprowadź do postaci w której istnieje tylko jedna etykieta oraz jest możliwy tylko jeden skok

3) Warto także zobaczyć różnicę po wybraniu flagi Og. Co powoduje ta zmiana?
*/
