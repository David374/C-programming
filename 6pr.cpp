#include "pch.h" 
#include <iostream> 
#include <string> 
#include <locale>
#include <windows.h>

using namespace std;

class Property
{
public:
	double worth;

	Property(double w)
	{
		worth = w;
	}
	virtual void worthPersent() = 0;
	void Destroy()
	{
		delete this;
	}
};
class Appartment :public Property
{
public:
	Appartment(double cost) :Property(cost)
	{};

	void worthPersent()
	{
		cout << worth / 1000;
		cout << endl;

	}

};
class Car :public Property
{
public:
	Car(double cost) :Property(cost)
	{};

	void worthPersent()
	{
		cout << worth / 200;
		cout << endl;

	}

};
class CountryHouse :public Property
{
public:
	CountryHouse(double cost) :Property(cost)
	{};

	void worthPersent()
	{
		cout << worth / 500;
		cout << endl;

	}

};
int main()
{
	setlocale(LC_ALL, "Russian");

	double costApp;
	Property** k = new Property*[7];

	for (int i = 0; i < 7; i++)
	{
		if (i <= 2)
		{
			cout << " Appartment " << i << ":";
			cin >> costApp;
			k[i] = new Appartment(costApp);
			k[i]->worthPersent();
			k[i]->Destroy();
		}
		else if (i <= 4)
		{
			cout << " Car " << i << ":";

			cin >> costApp;
			k[i] = new Car(costApp);
			k[i]->worthPersent();
			k[i]->Destroy();
		}
		else
		{
			cout << " CountryHouse " << i << ":";

			cin >> costApp;
			k[i] = new CountryHouse(costApp);
			k[i]->worthPersent();
			k[i]->Destroy();
		}
	}

	return 0;
}
