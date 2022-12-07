#include<iostream>
#include<string>
using namespace std;
class Force{
	public:
	void force(int m,int a){
		int f = m*a;
		cout<<"Force : "<<f<<" N\n";
	}
};
class Momentum : public Force{
	public:
	void momentum(int m1,int v1){
		int p = m1*v1;
		cout<<"Momentum : "<<p<<"\n";
	}
};
class Area : public Force{
	public:
	void area(int r){
		const double pi = 3.142;
		double a = pi*r*r;
		cout<<"Area of Circle : "<<a<<"sq.m\n";
	}
};
class Acceleration : public Momentum{
	public:
	void acceleration(int v2,int t2){
		int a2 = v2/t2;
		cout<<"Acceleration : "<<a2<<"\n";
	}
};
int main(){
	Acceleration a3;
	Area a4;
	a3.force(56,98);
	a3.momentum(43,65);
	a4.area(45);
	a3.acceleration(78,23);
	return 0;
}