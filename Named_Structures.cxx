#include<iostream>
#include<string>
using namespace std;

struct Identity{
		string name;
		int roll;
		string Address;
	} Info,Bio;
	
int main(){
	Identity Info,Bio;
	
	Info.name = "Anish Patil";
	Info.roll = 8500;
	Info.Address = "Ghansoli";
	
	Bio.name = "Yash Rokade";
	Bio.roll = 8515;
	Bio.Address = "Khopoli";
	
	cout<<"Name : "<<Info.name<<"\n"<<"Roll No : "<<Info.roll<<"\n"<<"Address : "<<Info.Address<<"\n\n";
	
	cout<<"Name : "<<Bio.name<<"\n"<<"Roll No : "<<Bio.roll<<"\n"<<"Address : "<<Bio.Address<<"\n";
	return 0;
}