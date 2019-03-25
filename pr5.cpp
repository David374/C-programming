#include "pch.h"
#include <iostream>
#include <locale.h>

using namespace std;



int main()
{
	setlocale(LC_ALL, "Russian");
	double arr_size;
	int nums;
	cout << "Введите размер массива [n] = ";
	cin >> arr_size;
	if (((double)((int)arr_size) == arr_size) && (arr_size > 0))
	{
		int* mass_ptr = new int[arr_size]; // Выделение памяти для массива
		for (int i = 0; i < arr_size; i++) 
		{
			cout << "[" << i << "] = ";
			cin >> nums;
			mass_ptr[i] = nums;
		}
	}
	else
	{
		cout << "Ошибка. Проверьте введённые данные!";
	}
	for (int i = 0; i < arr_size; i++)
	{
		cout << mass_ptr[i] << " ";
	}
	system("pause");
}
