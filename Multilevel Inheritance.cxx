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
class Area : public Momentum{
	public:
	void area(int r){
		const double pi = 3.142;
		double a = pi*r*r;
		cout<<"Area of Circle : "<<a<<"sq.m\n";
	}
};
int main(){
	Area a1;
	a1.force(56,45);
	a1.momentum(34,78);
	a1.area(23);
	return 0;
}