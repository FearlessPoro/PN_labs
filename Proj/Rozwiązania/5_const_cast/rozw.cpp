#include <iostream>

void f(const int a)
{
	std::cout<<a<<"\n";
}

int main()
{
	volatile const int x = 5;
	*const_cast<int*>(&x) = 2*x;
	f((const int)x);

return 0;
}