#include<iostream>
#include<string>
using namespace std;
int main(){
	int check;
	int arr[]= {5,3,9,4,2,15,12,30};
    int length = sizeof(arr)/sizeof(int);
    cout<<"Enter number : ";
	cin>>check; 
	string result;
	for(int i=0;i<length;i++){
		if(check == arr[i]){
			result = "Present in the array!!";
			break;
		}
	}
	if(result == ""){
		result = "Not present in the array!!";
		cout<<result;
	}
	else{
	cout<<result;
	}
	return 0;
}