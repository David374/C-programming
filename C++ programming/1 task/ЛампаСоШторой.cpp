*********************************************
1. version

#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "1 - означает True, 0 - False" << endl;
	char status_1 = 0;
	char status_2 = 0;
	char status_3 = 0;
	cout << "На улице сейчас день?/ Ответ:";
	cin >> status_1;
	cout << "Шторы раздвинуты?/ Ответ:";
	cin >> status_2;
	cout << "Лампа включена?/ Ответ:";
	cin >> status_3;
	if (((status_1 == '1') && (status_2 == '1')) || (status_3 == '1'))
	{
		cout << "В комнате светло!";
	}
	else
	{
		cout << "В комнате темно!";
	}

	return 0;
}
*********************************************
