*********************************************
1. version
#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	double a, b;
	cout << "Введите 1-е число:";
	cin >> a;
	cout << endl;
	cout << "Введите 2-е число:";
	cin >> b;
	cout << "Сумма данных чисел = " << a + b << endl;
	cout << "Разность данных чисел = " << a - b << endl;
	cout << "Произведение данных чисел = " << a * b << endl;
	if (b != 0)
	{
		cout << "Частное от деления данных чисел = " << a / b << endl;
	}
	else
	{
		cout << "Невозможно найти частное от деления, так как делитель равен 0!";
	}
	return 0;
}
*********************************************
2. version
