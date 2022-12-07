#include<iostream>
using namespace std;
int main(){
	int a[5] = {5,8,7,3,4};
	for(int i=0;i<5;i++){
		if(i<4){
		cout<<a[i]<<",";
		}
		else{
			cout<<a[i];
		}
	}
	cout<<"\nArray Length : "<<sizeof(a)/sizeof(int);
	return 0;
}