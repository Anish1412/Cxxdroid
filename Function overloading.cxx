#include<iostream>
#include<string>
using namespace std;
void myNumbers(int a,int b){
	int c = a+b;
	cout<<"Addition : "<<c<<"\n";
}
void myNumbers(int e,int f,int g){
	int h = e*f*g;
	cout<<"Multiplication : "<<h;
}
int main(){
	myNumbers(56,89);
	myNumbers(34,25,11);
	return 0;
}