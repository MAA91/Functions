#include<iostream>

using namespace std;

double Factorial(int f)
{
	double factorial = 1;
	for (; f > 0; f--)
		factorial *= f;
	return factorial;
}
double Power(double base, int index)
{
	double power = 1;
	for (; index > 0; index--)
		power *= base;
	return power;
}

void main()
{
	setlocale(0, "");
	int f;
	cout << "¬ведите число факториал которого нужно найти: "; cin >> f;
	cout << f << "! = " << Factorial(f) << endl;

	int index;
	double base;
	cout << "¬ведите основание и показатель степени: "; cin >> base >> index;
	cout << base << " ^ " << index << " = " << Power(base, index) << endl;
}