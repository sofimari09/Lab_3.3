// Lab_03_3.cpp
// Денисяк Софія-Марія
// Лабораторна робота №3.3
// Розгалуження, задане графіком функції
// Варіант 4
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; //вхідний аргумент
	double R; //вхідний аргумент
	double y; //результат обчислення виразу
	cout << "R="; cin >> R;
	cout << "x="; cin >> x;
	// розгалуження в повній формі
	if (x <= 0)
		y = (R * (x + 6)) / 6;
	else
		if (0 < x && x <= R)
			y = -sqrt(R * R - x * x);
		else
			if (R < x && x <= 2 * R)
				y = sqrt(R * R - (x - 2 * R) * (x - 2 * R));
			else
				y = R;
	cout << endl;
	cout << "y=" << y << endl;
	cin.get();
	return 0;
}