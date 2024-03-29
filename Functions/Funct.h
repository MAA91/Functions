#pragma once
#include<iostream>

using namespace std;

double Factorial_r(int f)
{
	if (f == 1)
		return 1;
	return  f * Factorial(f - 1);
}

double Power_r(double base, int index)
{
	double power = 1;
	for (int i = abs(index); i > 0; i--)
		power *= base;
	if (index >= 0)
		return power;
	if (index < 0)
		return 1 / power;
}