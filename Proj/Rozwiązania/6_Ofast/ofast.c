double f(double x, double y, double z, double w)
{
    volatile double a = (x + y) - z;
	volatile double b = (y + w) - z;

	return a+b;
}