#include <iostream>

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
	for (int i = abs(index); i > 0; i--)
		power *= base;
	if (index >= 0)
		return power;
	if (index < 0)
		return 1 / power;
}

void main()
{
	setlocale(0, "");
	int f;
	cout << "Введите число факториал которого нужно найти: "; cin >> f;
	cout << f << "! = " << Factorial(f) << endl;

	int index;
	double base;
	cout << "Введите основание и показатель степени: "; cin >> base >> index;
}