#include <stdio.h>
double f(double x, double y, double z, double w);
int main()
{
	double x = 1.;
	double y = -1.;
	double z = 1e-20;
	double w = 1.;
	printf("%g\n", f(x, y, z, w));
}