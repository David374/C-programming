#include "pch.h" 
#include <iostream> 
#include <string> 

using namespace std;

class Animal
{
protected:
	string name;
public:
	Animal(string Conname)
	{
		name = Conname;
	}

	virtual void ShowInfo() = 0;
};
class Cat :public Animal
{
public:
	Cat(string name) :Animal(name)
	{

	}
	void ShowInfo()
	{

		cout << name << endl << "Can't Fly " << endl << "Says meow-meow scraaaaaaatch" << endl << "--------------------------" << endl;
	}
};
class Dog :public Animal
{
public:
	Dog(string name) :Animal(name)
	{

	}
	void ShowInfo()
	{

		cout << name << endl << "Can't Fly " << endl << "Says: gav-gav RRrRrrRRrrRRrR" << endl << "--------------------------" << endl;
	}
};
class Parrot :public Animal
{
public:
	Parrot(string name) :Animal(name)
	{

	}
	void ShowInfo()
	{

		cout << name << endl << "Can Fly " << endl <<  "Says nothing, but chik chik and can repeat what you says" << endl << "--------------------------" << endl;
	}
};
int main()
{

	Animal** animals = new Animal*[3];
	animals[0] = new Dog("Dog"),
	animals[0]->ShowInfo();
	animals[1] = new Cat("Cat");
	animals[1]->ShowInfo();
	animals[2] = new Parrot("Parrot");
	animals[2]->ShowInfo();

	return 0;

}
