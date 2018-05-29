double f(double x, double y, double z, double w)
{
    volatile double a = (x + y) - z;
	volatile double b = (y + w) - z;

	return a+b;
}



/*
1) Porównaj kod assemblerowy przy użyciu flag O0, O3,oraz Ofast, jakie widać różnice? Czy taka optymalizacja jest pożądana?
2) Zaproponuj takie wartości x, y, z, oraz w wewnątrz programu main.c, aby wynik obliczeń z flagą Ofast był niepoprawny, natomiast z O3 tak
(Przykładowa odpowiedź:
	double x = 1.;
	double y = -1.;
	double z = 1e-20;
	double w = 1.;
)
*/