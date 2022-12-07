#include<iostream>
#include<string>
using namespace std;
class Animal{
	public:
	void animalSound(){
		cout<<"Animal makes a sound!!\n";
	}
};
class Pig : public Animal{
	public:
	void animalSound(){
		cout<<"Pee Pee!!\n";
	}
};
class Dog : public Animal{
	public:
	void animalSound(){
		cout<<"Bow Bow!!";
	}
};
int main(){
	    Animal myAnimal;
	    Pig myPig;
	    Dog myDog;
	    myAnimal.animalSound();
	    myPig.animalSound();
	    myDog.animalSound();
	    return 0;
}