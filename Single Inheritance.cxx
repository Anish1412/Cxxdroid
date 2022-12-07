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
int main(){
	Momentum m1;
	m1.force(34,67);
	m1.momentum(45,89);
	return 0;
}