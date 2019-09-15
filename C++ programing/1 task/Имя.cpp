*********************************************
1. version
#include <string> // подключаем библиотеку string для работы со строками
#include <iostream> // подключаем библиотеку для управления вводом и выводом

using namespace std; // используем пространство имен

int main()
{
	setlocale(LC_ALL, "RUS"); // устанавливаем в консоли поддержку русского языка
	string MyName; // создаем переменную типа string с именем MyName
	cout << "Введите Ваше имя:";
	cin >> MyName;
	cout << MyName << endl;

	return 0;
}
*********************************************
2. version
#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	char name[101]; // создаем одномерный массив типа char размером в 100 элементов
	cout << "Введите ваше имя:";
	cin >> name;
	cout << name;
	return 0;
}
*********************************************
3. version
#include <iostream>

using namespace std;

int main()
{
	cout << "*Здесь ваше имя*";
	return 0;
}
*********************************************
4. version
#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	SetConsoleCP(1251); // ввод с консоли в кодировке 1251 для поддержки русских символов
	SetConsoleOutputCP(1251); // вывод на консоль в кодировке 1251
	char name[129] = { 0 }; // обнуляем массив, чтобы в нём не хранился мусор
	cout << "Введите ваше имя:";
	cin.getline(name, 129); // используем функцию cin.getline для считывания в массив всей строки, включая даже пробелы
	cout << name << endl;

	return 0;
}
*********************************************
5. version
#include <iostream>
#include <windows.h>
#define return puts("*ВАШЕ ИМЯ*"); return // используем макрос для вывода имени
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	return 0;
}
*********************************************
6. version // в этой версии используется посимвольный вывод всех букв имени с помощью цикла
 #include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	char name[6] = { 'V', 'a', 'd', 'e', 'r' }; // Здесь по буквам пишем своё имя
	
	for (int i = 0; i < 5; i++)
	{
		cout << name[i];
	}

	return 0;
}
*********************************************
