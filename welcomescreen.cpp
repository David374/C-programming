#include "pch.h"
#include <iostream>
#include <locale>
#include <windows.h>
using namespace std;

int main()
{
	// меняет размер буфера
	/*HANDLE hWnd = GetStdHandle(STD_OUTPUT_HANDLE); 
	COORD bufferSize = { 101, 100 };
	SetConsoleScreenBufferSize(hWnd, bufferSize);   */
	
	setlocale(LC_ALL, "Russian");
	cout << "|--------------------------------------------------------------------------------------------|" << endl;
	cout << "|                                                                                            |" << endl;
	cout << "|                                                                                            |" << endl;
	cout << "|             Добро пожаловать в наш отель! Желаете забронировать номер?                     |" << endl;
	cout << "|                                                                                            |" << endl;
	cout << "|                                                                                            |" << endl;
	cout << "|--------------------------------------------------------------------------------------------|" << endl;

	return 0;

}


---------------------------------------
#include "pch.h"
#include <iostream>
#include <locale>
#include <windows.h>
using namespace std;

int main()
{
	SetWindowPos(GetConsoleWindow(), NULL, 100, 100, 600, 300, NULL); // меняет размер консоли и устанавливает координаты
	setlocale(LC_ALL, "Russian");
	cout << " |--------------------------------------------------------------------------------------------|" << endl;
	cout << " |                                                                                            |" << endl;
	cout << " |                                                                                            |" << endl;
	cout << " |             Добро пожаловать в наш отель! Желаете забронировать номер?                     |" << endl;
	cout << " |                                                                                            |" << endl;
	cout << " |                                                                                            |" << endl;
	cout << " |--------------------------------------------------------------------------------------------|" << endl;

	return 0;

}
