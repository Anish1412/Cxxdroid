#include<stdio.h>

void isSort(int arr[],int n){
 	int a = 0;
		for(int i=0;i<n-1;i++){
			if(arr[i] < arr[i+1]){
				a = 0;
			}
			else {
				a = 1;
				break;
			}
		}
	if(a > 0){
		printf("It's an UnSorted Array!!");
	}
	else {
		printf("It's an Sorted Array!!");
	} 
}

int main(){
//	int arr[] = {12,34,56,90,78};
	int arr[] = {12,34,56,78,90};
	int n = sizeof(arr)/sizeof(int);
	isSort(arr,n);
	return 0;
}