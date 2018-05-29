volatile int z = 0;
volatile double d;
int tab[2];
volatile int w;
void f(int y, unsigned int x, int i, int j)
{
	//signed division
	z = y/10;
	//unsigned division
	z = (unsigned int)y/10;

	//signed conversion
	d = (double) (signed int) x;
	//unsigned conversion
	d = (double) x;

	//post increment
	for (int i = 0; i < 10; i++);
	//pre increment
	for (int i = 0; i < 10; ++i);
	
	//post indexing
	w = tab[i++];
	//pre indexing
	w = tab[--j];
}

/*
 1) Skompiluj program bez asemblacji z flagą O0, porównaj ze sobą różne wersje tych samych operacji, czy są widoczne różnice?
 2) Czy po dodaniu flag optymalizacji kompilator potrafi sam wykonać za nas takie optymalizacje?
 3) Za pomocą gcc -gp test.c skopiluj program, wykonaj go, a następnie za pomocą gprof sprawdź które operacje są bardziej optymalne. 
 Czy zgadza się to z przewidywaniami?   
*/