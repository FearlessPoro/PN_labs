//large number of iterations in every loop
const int size = 500000000; 
volatile int z = 0;
volatile double d;
int tab[11];
volatile int w;
volatile int x;
//division of int by constant
void signedDivision(int y)
{
	for (int i = 0; i < size; i++)
	{
		z = y/10;
		z = y/10;
		z = y/10;
		z = y/10;
		z = y/10;
		z = y/10;
		z = y/10;
		z = y/10;
		z = y/10;
		z = y/10;
		z = y/10;
	}
}

//division of unsigned int by constant
void unsignedDivision(int y)
{
	for (int i = 0; i < size; i++)
	{
		z = (unsigned int)y/10;
		z = (unsigned int)y/10;
		z = (unsigned int)y/10;
		z = (unsigned int)y/10;
		z = (unsigned int)y/10;
		z = (unsigned int)y/10;
		z = (unsigned int)y/10;
		z = (unsigned int)y/10;
		z = (unsigned int)y/10;
		z = (unsigned int)y/10;
		z = (unsigned int)y/10;
	}	
}

//conversion to double from signed int
void signedConversion(unsigned int y )
{
	for (int i = 0; i < size; i++)
	{
			d = (double) (signed int) y;
			d = (double) (signed int) y;
			d = (double) (signed int) y;
			d = (double) (signed int) y;
			d = (double) (signed int) y;
			d = (double) (signed int) y;
			d = (double) (signed int) y;
			d = (double) (signed int) y;
			d = (double) (signed int) y;
			d = (double) (signed int) y;
			d = (double) (signed int) y;
	}	
}

//conversion to double from unsigned int
void unsignedConversion(unsigned int y )
{
	for (int i = 0; i < size; i++)
	{
		d = (double) y;
		d = (double) y;
		d = (double) y;
		d = (double) y;
		d = (double) y;
		d = (double) y;
		d = (double) y;
		d = (double) y;
		d = (double) y;
		d = (double) y;
		d = (double) y;
	}	
}

//loop using post-incrementation
void justALoopPost(int i)
{
	for (; i < size; i++)
	{
	}
}

//loop using pre-incrementation
void justALoopPre(int i)
{
	for (; i < size; ++i)
	{
	}
}

void postIndexing()
{
	int i = 0;	
	for (int j = 0; j < size; j++)
	{
		i = 1;
		x = tab[i++];
		x = tab[i++];
		x = tab[i++];
		x = tab[i++];
		x = tab[i++];
		x = tab[i++];
		x = tab[i++];
		x = tab[i++];
		x = tab[i++];
		x = tab[i++];
	}
}

void preIndexing()
{
	int i = 0;
	for (int j = 0; j < size; j++)
	{
		i = 0;
		x = tab[++i];
		x = tab[++i];
		x = tab[++i];
		x = tab[++i];
		x = tab[++i];
		x = tab[++i];
		x = tab[++i];
		x = tab[++i];
		x = tab[++i];
		x = tab[++i];
	}
}

int main()
{
	volatile int y = 100;
	volatile int i = 0;
	signedConversion((unsigned int)y);
	unsignedConversion((unsigned int)y);
	signedDivision((int)y);
	unsignedDivision((int)y);
	justALoopPost(i);
	justALoopPre(i);
	postIndexing();
	preIndexing();

return 0;
}