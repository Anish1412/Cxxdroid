#include<iostream>
#include<string>
using namespace std;
void Force(int &m,int &a){
	int f = m*a;
	cout<<"Force : "<<f<<" N";
}
int main(){
	int a = 45;
	int b = 67;
	Force(a,b);
	return 0;
}