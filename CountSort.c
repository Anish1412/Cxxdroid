#include<stdio.h>

void display(int arr1[],int size){
	printf("Array : ");
	for(int i=0;i<size;i++){
		if(i < size-1){
			printf("%d,",arr1[i]);
		}
		else {
			printf("%d",arr1[i]);
		}
	}
	printf("\n");
}

void count(int arr1[],int arr2[],int size,int size1){
/*
//Creating a new Sorted Array & later copy in original array
	int arr3[size];  */
	
	int k=0;
	for(int i=0;i<size;i++){
		arr2[arr1[i]] += 1;
	}

/*    printf("Array : ");
	for(int j=0;j<size1;j++){
		if(j < size1-1){
			printf("%d,",arr2[j]);
		}
		else {
			printf("%d",arr2[j]);
		}
	}  */

// Passing elements directly to the original array not creating new array
      int i=0;
  	while(i < size1){
       if(arr2[i] != 0){
          arr1[k] = i;
          k++;
          arr2[i] -= 1;
        }
       else {
          i++;
        }
      }  
      
/*	
//To make a new array & copy in original array
     int i=0;
  	while(i < size1){
       if(arr2[i] != 0){
          arr3[k] = i;
          k++;
          arr2[i] -= 1;
        }
       else {
          i++;
        }
      }  

//Comment in below printing code if comment outing whole code   
    printf("Array : ");
	for(int j=0;j<size;j++){
		if(j < size-1){
			printf("%d,",arr3[j]);
		}
		else {
			printf("%d",arr3[j]);
		}
	}  
	
// To make the values of original array & array3 same
	for(int i=0;i<size;i++){
		arr1[i] = arr3[i];
	}  */
}

void countSort(int arr1[],int size){
// To Find maximum number
	int max = 0;
	for(int i=0;i<size;i++){
		if(max < arr1[i]){
			max = arr1[i];
		}
	}	

//To make all values of new array equal to 0
	int arr2[max+1];
	int size1 = sizeof(arr2)/sizeof(int);
	for(int j=0;j<size1;j++){
		arr2[j] = 0;
	}
	
/*	printf("Array : ");
	for(int j=0;j<size1;j++){
		if(j < size1-1){
			printf("%d,",arr2[j]);
		}
		else {
			printf("%d",arr2[j]);
		}
	}  */
	
//Sending values to make a Sorted Array
	count(arr1,arr2,size,size1);
}

int main(){
int arr1[] = {12,98,34,76,56,54,78,32,90,10};
	int size = sizeof(arr1)/sizeof(int);
	printf("Before Sorting : \n");
	display(arr1,size);
    countSort(arr1,size);
    printf("After Sorting : \n");
	display(arr1,size); 
	return 0;
}