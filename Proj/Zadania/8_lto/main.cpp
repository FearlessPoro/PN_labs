#include<iostream>
#include"main.h"

int main(){
	double suma = 0;
	B b;
	A* ptr = &b;

	for(int i = 0; i < 10000000; i++)
		ptr->g();
	
	return suma;
}