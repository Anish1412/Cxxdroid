#include<iostream>
#include<string>
using namespace std;
class Hello{
	public:
	static int Force(int m,int a){
		int f = m*a;
		return f;
	}
};
int main(){
//	Hello h1;
	cout<<"Force : "<<Hello::Force(56,34)<<" N";
	return 0;
}