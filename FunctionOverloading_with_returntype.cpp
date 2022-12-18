#include<iostream>
#include<string>
using namespace std;
int Force(int m,int a){
	int f = m*a;
	return f;
}
double Force(double m1,double a1){
	double f1 = m1*a1;
	return f1;
}
int main(){
	int b = Force(56,89);
	int c = Force(34.5,78.6);
	cout<<"Integer value : "<<b<<"\n";
	cout<<"Double value : "<<c<<"\n";
	return 0;
}