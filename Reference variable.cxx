#include<iostream>
#include<string>
using namespace std;
int main(){
	string name = "Anish";
	string &fName = name;
	cout<<name;
	cout<<fName;
	return 0;
}