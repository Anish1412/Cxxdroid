#include<stdio.h>

void display(int arr[],int len){
	for(int i=0;i<len;i++){
		if(i<len-1){
			printf("%d,",arr[i]);
		}
		else{
			printf("%d",arr[i]);
		}
	}
}

void binarySearch(int arr[],int len,int elem){
	int low,mid,high;
	int ind = -1;
	low = 0;
	high = len-1;
	while(low<=high){
		mid = (high+low)/2;
		for(int i=0;i<len;i++){
		if(elem == arr[mid]){
			ind = mid;
		}
		 if(elem > arr[mid]){
			low = mid+1;
		}
		else{
			high = mid-1;
		}
	}
	}
	if(ind != -1){
	printf("\n%d is present at index %d in the array!!",elem,ind);
	}
	else{
		printf("\n%d is not present in the array!!",elem);
	}
}

int main(){
	int arr[] = {12,21,34,43,54,56,76,78,90,98};
	int size = sizeof(arr)/sizeof(int);
	display(arr,size);
	int num;
	printf("\nEnter number : ");
	scanf("%d",&num);
	binarySearch(arr,size,num);
	return 0;
}