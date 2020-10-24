// Lab_03_3.cpp
// < Коваля Дмитра >
// Лабораторна робота № 3.3
// Розгалуження, задане графіком функції.
// Варіант 14
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double x; 
	double y; 
	cout << "x = "; cin >> x;

	if (x <= -4)
		y = -2;
	else
		if (-4 < x && x <= 0)
			y = -1 + ((1./ 4) * (x + 4));
		else
			if (x > 0 && x <= 2)
				y = x * x;
			else
			y = 4 + ((-4./ 8) * (x - 2));
	cout << endl;
	cout << "y = " << y << endl;
	cin.get();
	return 0;

}


