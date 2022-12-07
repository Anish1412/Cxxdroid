#include<iostream>
#include<string>
using namespace std;
class Employee{
	private:
	string name;
	public:
	string getName(){
		return name;
	}
	void setName(string n){
		name = n;
	}
};
int main(){
	Employee e;
	e.setName("Anish Patil");
	cout<<"Name : "<<e.getName();
	return 0;
}