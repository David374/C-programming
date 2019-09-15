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
3. version // Pro Version // В данной версии присутствует частичная защита от дурака. При вводе букв или символов
программа будет сообщать об ошибке и просить повторить ввод данных.
Но, в случае ввода смешанных данных по типу - "123asdasd" - программа обработает первые входные числа. //
#include <iostream>
#include <windows.h>
#include <iomanip> // подключаем библиотеку, отвечающую за реазилазцию функций для работы с форматированием вывода
using namespace std;

long double Result(long double a, long double b);

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	long double a, b;
	cout << "Введите 1-е число:";
	cin >> a;
	while(cin.fail())                 
	{					       
		cout << "Неверный ввод!" << endl;
		cin.clear(); // сбрасываем состояние cin (fail состояние)
		cin.ignore(1000, '\n'); // очищаем буфер до 1000 символов
		cout << "Введите корректно 1-е число:";
		cin >> a;

	}
	
Пока входной поток сообщает об ошибке, выводим сообщение об ошибке и просим повторить ввод	
///////////////////////////////////////////////////////////////////////////////////////////
	cout << "Введите 2-е число:";
	cin >> b;
	while (cin.fail())
	{
		cout << "Неверный ввод!" << endl;
		cin.clear();
		cin.ignore(1000, '\n');
		cout << "Введите корректно 2-е число:";
		cin >> b;
	}
	Result(a, b);
	

	return 0;
}

long double Result(long double a, long double b)
{
	cout << "\n\n";
	cout << setprecision(16); // устанавливаем точность после запятой до 16 цифр, можно прописать больше
	cout << a << " + " << b << " = " << a + b << endl;
	cout << a << " - " << b << " = " << a - b << endl;
	cout << a << " * " << b << " = " << a * b << endl;
	if (b != 0)
	{
		cout << a << " / " << b << " = " << a / b;
	}
	else
	{
		cout << "Невозможно найти частное, так как b = 0";
	}

	return 0;
}

