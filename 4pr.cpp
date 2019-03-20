// ConsoleApplication10.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <conio.h>
using namespace std;


double * Alloc_memory(int size) // функция для выделения памяти
{
	double * ch = new double[size];
	return(ch);
}
double * Fill(double * ch, int size) // функция для заполнения ячеек
{
	for (int i = 0; i < size; i++)
	{
		cout << "Put your number: ";
		cin >> *ch;
		ch++;
	}
	ch -= size;
	return(ch);
}

void Output(double * ch, int size) // функция вывода данных на экран
{
	cout << "Your array is: ";
	for (int i = 0; i < size; i++)
	{
		cout << *ch << " ";
		ch++;
	}
}

void Free_mem(double * ch) // функция освобождения памяти
{
	delete[] ch;
}
int main()
{
	int size, fn = 1;
	double * ch;
	while (fn == 1)
	{
		cout << "Put array size: ";
		cin >> size;
		ch = Alloc_memory(size);
		ch = Fill(ch, size);
		Output(ch, size);
		Free_mem(ch);
		cout << "\n Repeat array changing? Yes - press 1, No - press 0\n";
		cin >> fn;
		_getch();
	}

}

