*********************************************
1. version

#include <iostream>
#include <windows.h>
#include <iomanip>
using namespace std;

int main()
{
	SetConsoleCP(1251); // ввод с консоли в кодировке 1251 для поддержки русских символов
	SetConsoleOutputCP(1251); // вывод на консоль в кодировке 1251
	double n;
	cout << "Введите натуральное число N:";
	cin >> n;
	while(n <= 0)
	{
		cout << "Неверный ввод! Повторите попытку:";
		cin >> n;
	}
	cout << setprecision(16);
	for (int i = 1; i < 11; i++)
	{
		cout << "[" << i << "] = " << n << endl;
		n++;
	}
	return 0;
}

*********************************************
