#include<iostream>
#include<string>
using namespace std;
int main(){
	string name = "Sushant";
	string* point = &name;
	cout<<"Memory Address : "<<point<<"\n";
	cout<<"Value : "<<*point;
	return 0;
}