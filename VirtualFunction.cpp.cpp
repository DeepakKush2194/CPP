#include <iostream>
using namespace std;
//Poymorphism of class, Virtual and Pure Virtual function

class Instrument { //Abstract Base Class (Abstract Class :- A class that has atleast One Pure Virtual Function
public:
	virtual void MakeSound() = 0; // Pure Virtual Function, means every child class that Inherits from this function will have to its Own implementation
};
class Flute :public Instrument { //Derived Class
public:
	void MakeSound() {
		cout << "Flute is playing...." << endl;
	}
};

class Piano :public Instrument { //Derived Class
public:
	void MakeSound() {
		cout << "Piano is playing...." << endl;
	}
};

int main() {
	Instrument* i1= new Flute;
	//i1->MakeSound();
	Instrument* i2= new Piano;
	//i2->MakeSound();

	Instrument* instruments[2] = { i1,i2 };
	for (int i = 0; i < 2; i++)
		instruments[i]->MakeSound();

	system("pause>0");
}