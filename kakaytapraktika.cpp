#include "pch.h" 
#include <iostream> 
#include <string> 
#include<conio.h> 
using namespace std; 

class Animal { 
protected: 
int age; 
string name; 
public: 
virtual void gets() = 0; 
void shows() { 
cout «"Tvoyey zveruge " « age; 
cout «" ee zovut " « name; 
} 

}; 

class Cat : public Animal { 
private: 
string color; 
public: 
void gets() { 
cout « "Ima? " « endl; 
cin » name; 
cout « "Vozrast" « endl; 
cin » age; 
} 
void get() { 

cout « "Cvet kata?\n"; 
cin » color; 

} 
void show() { 
cout « "I tak, pozdravlau vas s kotom! "; 
Animal::shows(); 
cout «" and vi pocrasily ee v "« color «" cvet"; 
} 
}; 

class Dog : public Animal { 
public: 
string breed; 
void gets() { 
cout « "Ima? " « endl; 
cin » name; 
cout « "Vozrast" « endl; 
cin » age; 
} 
void get() { 

cout « "Poroda psa\n"; 
cin » breed; 


} 
void show() { 
cout « "I tak, pozdravlau vas s psom! "; 
Animal::shows(); 
cout « " and poroda vashego psa - " « breed; 
} 
}; 

class Parrot : public Animal { 
public: 
string talk; 
void gets() { 
cout « "Ima? " « endl; 
cin » name; 
cout « "Vozrast" « endl; 
cin » age; 
} 
void get() { 

cout « "Chto on budet govorit\n"; 
cin » talk; 


} 
void show() { 
Animal::shows(); 
cout «" and on govorit: "« talk « talk « talk « talk « talk « talk;//типа постоянно повторяет 
} 
}; 

int main() { 
Cat cat1; 
Dog d1; 
Parrot p1; 
int a; 
cout « "Vibery svou zverugu:\n 1-Kot\n 2-Pes\n 3-Papugay" « endl; 
cin » a; 
if (a == 1) { 
cat1.gets(); 
cat1.get(); 
cat1.show(); 
} 
else 
{ 
if (a == 2) { 
d1.gets(); 
d1.get(); 
d1.show(); 
} 
else 
{ 
if (a == 3) { 
p1.gets(); 
p1.get(); 
p1.show(); 
} 
else { 
cout « "!!!!!CHITAYTE POSTANOVKU ZADACHI!!!!!!!!"; 
} 
} 

} 
_getch(); 
return 0; 
}
