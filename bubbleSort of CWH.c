#include<stdio.h>

void display(int arr[],int n){
	printf("Array : ");
	for(int i=0;i<n;i++){
		if(i < n-1){
			printf("%d,",arr[i]);
		}
		else {
			printf("%d",arr[i]);
		}
	}
}

void bubbleSort(int arr[],int n){
	int temp;
	int isSorted = 0;
	for(int i=0;i<n-1;i++){
		isSorted = 1;
		printf("The number of passes : %d\n",i+1);
		for(int j=0;j<n-1-i;j++){
			if(arr[j] > arr[j+1]){
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
				isSorted = 0;
			}
		}
		if(isSorted){
			return;
		}
	}
}

int main(){
	int arr[] = {12,90,34,78,56};
 //     int arr[] = {12,34,56,78,90};
	int n = sizeof(arr)/sizeof(int);
	bubbleSort(arr,n);
	display(arr,n);
	return 0;
}