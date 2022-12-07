#include<stdio.h>

 void bubbleSort(int arr[],int n){
	bool a;
	do {
		a = false;
/* we need to give n-1 bcoz, our loop should run only till second last element else if we run till n then, it will also swap the number after n, which is 0 which is not a part of array.So, it is a smaller number it will come in array  
While Sorting if run till n,
E.g. int arr[]  = {98,12,34,56,34},0
After Sorting,
E.g. int arr[] = {0,12,34,56,78};
*/
		for(int i=0;i<n-1;i++){
			if(arr[i] > arr[i+1]){
				int temp = arr[i];
				arr[i] = arr[i+1];
				arr[i+1] = temp;
				a = true;
			}
		}
	}while(a);
}

void display(int arr[],int n1){
	printf("Array : ");
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
	int arr[] = {98,12,34,56,34};
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