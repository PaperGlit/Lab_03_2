// Lab_03_2.cpp
// Лазар Владислав
// Лабораторна робота No 3.2
// Розгалуження, задане формулою: функція з параметрами.
// Варіант 11

#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	SetConsoleOutputCP(1251);

	double x;
	double a;
	double b;
	double c;
	double F1;
	double F2;

	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	cout << "x = "; cin >> x;

	if (x < 1 && c != 0)
	{
		F1 = a * x * x + b / c;
	};
	if (x > 1.5 && c == 0)
	{
		F1 = (x - a) / ((x - c) * (x - c));
	};
	if (!(x < 1 && c != 0) && !(x > 1.5 && c == 0))
	{
		F1 = (x * x) / (c * c);
	};

	cout << "1) F = " << F1 << endl;

	if (x < 1 && c != 0)
	{
		F2 = a * x * x + b / c;
	}
	else
	{
		if (x > 1.5 && c == 0)
		{
			F2 = (x - a) / ((x - c) * (x - c));
		}
		else
		{
			F2 = (x * x) / (c * c);
		}
	};

	cout << "2) F = " << F2 << endl;

	if (fabs(F1 - F2) < 0.0000001)
	{
		cout << "Результати рівні" << endl;
	}
	else
	{
		cout << "Результати нерівні" << endl;
	};

	return 0;
}