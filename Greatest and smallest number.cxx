#include<iostream>
using namespace std;
int main(){
	int a1,a2,a3,a4,a5;
	cout<<"Enter 5 numbers : "<<endl;
	cin>>a1;
	cin>>a2;
	cin>>a3;
	cin>>a4;
	cin>>a5;
	int a[] = {a1,a2,a3,a4,a5};
	//For Finding greatest number
	int result;
	if(a[0] > a[1] && a[0] > a[2] && a[0] > a[3] && a[0] > a[4]){
		result = a[0];
	}
	if(a[1] > a[0] && a[1] > a[2] && a[1] > a[3] && a[1] > a[4]){
		result = a[1];
	}
	if(a[2] > a[0] && a[2] > a[1] && a[2] > a[3] && a[2] > a[4]){
		result = a[2];
	}
	if(a[3] > a[0] && a[3] > a[1] && a[3] > a[2] && a[3] > a[4]){
		result = a[3];
	}
	if(a[4] > a[0] && a[4] > a[1] && a[4] > a[2] && a[4] > a[3]){
		result = a[4];
	} 
	//cout<<"\n"<<result<<" is greatest";
	cout<<"\n";
	int exe = result+1;
	for(int i=0;i<exe;i++){
		int ans;
		if(i<5){
			ans = a[i];
		}
		cout<<ans<<endl;
	}
	
	//For Finding smallest number
/*	if(a[0] < a[1] && a[0] < a[2] && a[0] < a[3] && a[0] < a[4]){
		result = a[0];
	}
	if(a[1] < a[0] && a[1] < a[2] && a[1] < a[3] && a[1] < a[4]){
		result = a[1];
	}
	if(a[2] < a[0] && a[2] < a[1] && a[2] < a[3] && a[2] < a[4]){
		result = a[2];
	}
	if(a[3] < a[0] && a[3] < a[1] && a[3] < a[2] && a[3] < a[4]){
		result = a[3];
	}
	if(a[4] < a[0] && a[4] < a[1] && a[4] < a[2] && a[4] < a[3]){
		result = a[4];
	}
	cout<<"\n"<<result<<" is smallest"; */
	return 0;
}