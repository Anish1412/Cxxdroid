#include<iostream>
#include<string>
using namespace std;
int main(){
	string state = "Maharashtra";
	string* p = &state;
	*p = "Karnataka";
	cout<<"Memory Address : "<<p<<"\n";
	cout<<"Value : "<<*p;
	return 0;
}