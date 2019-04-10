#include "pch.h"
#include <iostream>
#include <locale>
#include <string>
using namespace std;

int BubbleSort(int *mass_ptr, int arr_size)
{
	cout << "----------------------" << endl;
	mass_ptr = new int[arr_size];
	for (int i = 0; i < arr_size; i++)
	{
		cout << "arr[" << i << "] = ";
		cin >> mass_ptr[i];
	}
	int storage;
	for (int i = 0; i < arr_size - 1; i++)
	{
		for (int t = 0; t < arr_size - i - 1; t++)
		{
			if (mass_ptr[t] > mass_ptr[t + 1])
			{
				storage = mass_ptr[t];

				mass_ptr[t] = mass_ptr[t + 1];
				mass_ptr[t + 1] = storage;
			}
		}
	}
	cout << "Отсортированный массив int: ";
	for (int i = 0; i < arr_size; i++)
	{
		cout << mass_ptr[i] << "  ";
	}

	delete[] mass_ptr;
	cout << "\n";
	cout << "----------------------";
	return (0);
}

double BubbleSort(double *mass_ptr2, int arr_size)
{
	mass_ptr2 = new double[arr_size];
	for (int i = 0; i < arr_size; i++)
	{
		cout << "\narr[" << i << "] = ";
		cin >> mass_ptr2[i];
	}
	double storage;
	for (int i = 0; i < arr_size - 1; i++) {
		for (int t = 0; t < arr_size - i - 1; t++)
		{
			if (mass_ptr2[t] > mass_ptr2[t + 1])
			{
				storage = mass_ptr2[t];
				mass_ptr2[t] = mass_ptr2[t + 1];
				mass_ptr2[t + 1] = storage;
			}
		}
	}
	cout << "Отсортированный массив double: ";
	for (int i = 0; i < arr_size; i++)
	{
		cout << mass_ptr2[i] << "  ";
	}

	delete[] mass_ptr2;
	return (0);
}

int main()
{
	setlocale(LC_ALL, "Russian");
	double arr_size;// размер массива
	string str;
	string str1 = "int";
	string str2 = "double";
	cout << "Введите размер массива:";
	cin >> arr_size;
	cout << "Введите тип данных int или double: ";
	cin >> str;
	if (((int)((double)arr_size) != arr_size) || (arr_size < 0))
	{
		cout << "Неверный ввод!";
		exit(1);
	}
	arr_size = int(arr_size); // изменение типа переменной arr_size
	int* mass_ptr = new int[arr_size];
	double* mass_ptr2 = new double[arr_size];
	if (str == str1)
	{
		BubbleSort(mass_ptr, arr_size);
	}
	if (str == str2)
	{
		BubbleSort(mass_ptr2, arr_size);
	}
	if ((str != str1) && (str != str2))
	{
		cout << "Неверный тип данных!";
	}
	return (0);
}
