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
#include <iostream>

using namespace std;

double Sum(double a, double b);
double Difference(double a, double b);
double Multiply(double a, double b);
double Div(double a, double b);

int main()
{
	setlocale(LC_ALL, "RUS");
	double a, b;
	cout << "Введите 1-е число:";
	cin >> a;
	cout << "Введите 2-е число:";
	cin >> b;
	Sum(a, b);
	Difference(a, b);
	Multiply(a, b);
	if (b != 0)
	{
		Div(a, b);
	}
	else
	{
		cout << "Невозможно найти частное, так как делитель равен нулю!/На ноль делить нельзя!";
	}
}

double Sum(double a, double b) 
{
	double result = a + b;
	cout << "Сумма данных чисел = " << result << endl;

	return 0;
}

double Difference(double a, double b)
{
	double result = a - b;
	cout << "Разность данных чисел = " << result << endl;

	return 0;
}

double Multiply(double a, double b)
{
	double result = a * b;
	cout << "Произведение данных чисел = " << result << endl;

	return 0;
}

double Div(double a, double b)
{
	double result = a / b;
	cout << "Частное данных чисел = " << result << endl;

	return 0;
}
*********************************************
3. version

