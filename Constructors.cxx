#include<iostream>
#include<string>
using namespace std;
class Bio{
	public:
	string name;
	int roll;
	string Address;
	Bio(string n,int r,string a){
		name = n;
		roll = r;
		Address = a;
	}
};
int main(){
	Bio b1("Anish Patil",8500,"Ghansoli");
	cout<<"Name : "<<b1.name<<"\nRoll No : "<<b1.roll<<"\nAddress : "<<b1.Address;
	return 0;
}