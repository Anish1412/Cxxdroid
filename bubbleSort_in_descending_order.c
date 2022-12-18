#include<stdio.h>
#include<stdbool.h>

 void bubbleSort(int arr[],int n){
	bool a;
	do {
		a = false;
		for(int i=0;i<n;i++){
			if(arr[i] < arr[i+1]){
				int temp = arr[i];
				arr[i] = arr[i+1];
				arr[i+1] = temp;
				a = true;
			}
		}
	}while(a);
}

void display(int arr[],int n1){
	for(int i=0;i<n1;i++){
				if(i < n1-1){
					printf("%d,",arr[i]);
				}
				else {
					printf("%d",arr[i]);
				}
		}  
}  

int main(){
	int arr[] = {98,12,78,34,56};
	int n = sizeof(arr)/sizeof(int);
	printf("\t    ------- BUBBLE SORT -------\n\n");
	printf("Before Sorting :- \n");
	display(arr,n);
	printf("\n\nAfter Sorting :- \n");
	bubbleSort(arr,n);
	display(arr,n); 
	printf("\n");
	return 0;
}