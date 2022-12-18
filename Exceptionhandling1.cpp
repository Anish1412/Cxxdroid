#include<iostream>
#include<string>
using namespace std;
int main(){
	try{
		int age;
		cout<<"Enter Age : ";
		cin>>age;
		if(age>=18){
			cout<<"Access granted!! You are allowed";
		}
		else{
			throw (age);
		}
	}
	catch(int num){
		cout<<"Access Denied!! You are not allowed\n";
		cout<<"Your age : "<<num;
	}
	return 0;
}