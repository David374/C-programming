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









---------------------------------------------------------------------------------------
	
	
	
	
	
	
	
	
	
	HWND console = GetConsoleWindow();
	RECT r;
	GetWindowRect(console, &r); //stores the console current dimensions

	MoveWindow(console, r.left, r.top, 800, 450, TRUE); // 800 width, 100 height





--------------------------------------------------------------------------------
	
	
	
	
	
	
	
	
	
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
		COORD coordSize = { 100, 50 }; // задают размер буфера
		int ret = SetConsoleScreenBufferSize(hConsole, coordSize);
		SMALL_RECT rect = { 0, 0, 95, 45 }; // последние два значения задают размер экрана
		int ret2 = SetConsoleWindowInfo(hConsole, TRUE, &rect);
		SetConsoleTextAttribute(hStdOut, 72); // меняет цвет текста





-----------------------------------------------------------
	
	
	
	
	
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
		COORD coordSize = { 100, 50 }; // задают размер буфера
		int ret = SetConsoleScreenBufferSize(hConsole, coordSize);
		SMALL_RECT rect = { 0, 0, 95, 45 }; // последние два значения задают размер экрана
		int ret2 = SetConsoleWindowInfo(hConsole, TRUE, &rect);
		
	
		

	
	cout << " |--------------------------------------------------------------------------------------------|" << endl;
	cout << " |                                                                                            |" << endl;
	cout << " |                                                                                            |" << endl;
			HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	cout << " |             Добро пожаловать в наш отель! Желаете забронировать номер?                     |" << endl;
			SetConsoleTextAttribute(hStdOut, 05);
	cout << " |                             Нажмите Y, если да или N если нет                              |" << endl;
			SetConsoleTextAttribute(hStdOut, 7);
	cout << " |                                                                                            |" << endl;
	cout << " |--------------------------------------------------------------------------------------------|" << endl;
