#include<iostream>
#include<string>
using namespace std;

int main(){
	struct{
		string name;
		int roll;
		string Address;
	}Info,Bio;
	
	Info.name = "Anish Patil";
	Info.roll = 8500;
	Info.Address = "Ghansoli";
	
	Bio.name = "Omkar Patil";
	Bio.roll = 1651;
	Bio.Address = "Mangutti";
	
	cout<<"Name : "<<Info.name<<"\nRoll No : "<<Info.roll<<"\nAddress : "<<Info.Address<<"\n\n";
	
	cout<<"Name : "<<Bio.name<<"\nRoll No : "<<Bio.roll<<"\nAddress : "<<Bio.Address<<endl;
	return 0;
}