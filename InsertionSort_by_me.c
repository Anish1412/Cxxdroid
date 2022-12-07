#include<stdio.h>

void display(int arr[],int n){
	printf("\nArray : ");
	for(int i=0;i<n;i++){
		if(i < n-1){
			printf("%d,",arr[i]);
		}
		else {
			printf("%d",arr[i]);
		}
	}
}

void insertionSort(int arr[],int n){
	int temp;
	for(int i=0;i<n-1;i++){
		printf("The Number of Passes : %d\n",i+1);
		for(int j=i;j>=0;j--){
			if(arr[j] > arr[j+1]){
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
}

int main(){
	//Using algorithm
int arr[] = {57,13,97,56,18,84,47,24,39,72};
	//------- Sorted Array ------
//	int arr[] = {12,34,56,78,90};  

   // UnSorted Array
//	int arr[] = {90,34,78,12,56}; //check                                                                from 34
/* InsertionSort Process explaination :-
	1.    34,90,78,12,56    //check from 78
	
	2.1. 34,78,90,12,56
	2.2. 34,78,90,12,56    //check from 12
	
	3.1. 34,78,12,90,56
	3.2. 34,12,78,90,56
	3.3. 12,34,78,90,56    //check from 56
	
	4.1. 12,34,78,56,90
	4.2. 12,34,56,78,90 
	4.3. 12,34,56,78,90
	4.4. 12,34,56,78,90  */
	int n = sizeof(arr)/sizeof(int);
	printf("\t  ------- INSERTION SORT -------\n\n");
	printf("Before Sorting :- \n");
	display(arr,n);
	printf("\n\nAfter Sorting :- \n");
	insertionSort(arr,n);
	display(arr,n);
	printf("\n");
	return 0;
}