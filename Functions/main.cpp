#include "Funct.h"
int main()
{
	setlocale(0, "");
	int f;
	cout << "Введите число факториал которого нужно найти: "; cin >> f;
	cout << f << "! = " << Factorial(f) << endl;

	int index;
	double base;
	cout << "Введите основание и показатель степени: "; cin >> base >> index;
	cout << base << " ^ " << index << " = " << Power(base, index) << endl;
}