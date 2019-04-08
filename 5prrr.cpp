#include "pch.h"
#include <iostream>
#include <locale>

using namespace std;

int BubbleSort(int *mass_ptr, int arr_size)
{
	mass_ptr = new int[arr_size];
	for (int q = 0; q < arr_size; q++) {
		cout << "arr[" << q << "] = ";
		cin >> mass_ptr[q];
	}
	int temp;
	for (int q = 0; q < arr_size - 1; q++) {
		for (int w = 0; w < arr_size - q - 1; w++) {
			if (mass_ptr[w] > mass_ptr[w + 1]) {
				temp = mass_ptr[w];

				mass_ptr[w] = mass_ptr[w + 1];
				mass_ptr[w + 1] = temp;
			}
		}
	}
		for (int q = 0; q < arr_size; q++)
		{
			cout << mass_ptr[q] << " ";
		}

	delete[] mass_ptr;
	cout << "\n";
	cout << "|------------|";
	return (0);
}

double BubbleSort(double *mass_ptr2, int arr_size)
{
	mass_ptr2 = new double[arr_size];
	for (int q = 0; q < arr_size; q++) {
		cout << "\narr[" << q << "] = ";
		cin >> mass_ptr2[q];
	}
	double temp;
	for (int q = 0; q < arr_size - 1; q++) {
		for (int w = 0; w < arr_size - q - 1; w++) {
			if (mass_ptr2[w] > mass_ptr2[w + 1]) {
				temp = mass_ptr2[w];
				mass_ptr2[w] = mass_ptr2[w + 1];
				mass_ptr2[w + 1] = temp;
			}
		}
	}
		for (int q = 0; q < arr_size; q++)
		{
			cout << mass_ptr2[q] << " ";
		}

	delete[] mass_ptr2;
	return (0);
}

int main()
{
	setlocale(LC_ALL, "Russian");
	double arr_size; // размер массива
	cout << "Введите размер массива:";
	cin >> arr_size;
	if (((int)((double)arr_size) != arr_size) || (arr_size < 0))
	{
		cout << "Неверный ввод!";
		exit(1);
	}
		arr_size = int(arr_size);
		int* mass_ptr = new int[arr_size];
		double* mass_ptr2 = new double[arr_size];
		BubbleSort(mass_ptr, arr_size);
		BubbleSort(mass_ptr2, arr_size);
		return (0);
}
