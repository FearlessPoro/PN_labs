#pragma once

class A{
public:
	virtual double f(double a);
	virtual void g();
};

class B : public A{
public:
	double f(double a);
	void g();
};

