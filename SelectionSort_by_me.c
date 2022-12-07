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
	printf("\n\n");
}

void selectionSort(int arr[],int n){
	int temp;
	for(int i=0;i<n-1;i++){
		printf("The number of passes : %d\n",i+1);
		for(int j=i;j<n-1;j++){
			if(arr[i] > arr[j+1]){
				temp = arr[i];
				arr[i] = arr[j+1];
				arr[j+1] = temp;
			}
		}
		}	
}

int main(){
int arr[] = {98,12,78,34,56,63,97,29,73,20};

// int arr[] = {98,12,78,34,56};
	//1.1   12,98,78,34,56
	//2.1   12,78,98,34,56
	//2.2   12,34,98,78,56
	//3.1   12,34,78,98,56
	//3.2   12,34,56,98,78
	//4.1   12,34,56,78,98
	
	int n = sizeof(arr)/sizeof(int);
	printf("\t   ------- SELECTION SORT -------\n\n");
	printf("Before Sorting : \n");
	display(arr,n);
	selectionSort(arr,n);
	printf("\nAfter Sorting : \n");
	display(arr,n);
	return 0;
}