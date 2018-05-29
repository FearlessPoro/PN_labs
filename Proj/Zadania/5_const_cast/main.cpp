#include <iostream>

void f(const int a)
{
	std::cout<<a<<"\n";
}

int main()
{
	const int x = 5;
	*const_cast<int*>(&x) = 2*x;
	f(x);

return 0;
}

/*
zakładając, że x musi być const, oraz nie jest możliwa zmiana funkcji f, 
zmodyfikuj kod tak, aby wykonywał się zgodie z oczekiwaniami
*/