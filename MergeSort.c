#include<stdio.h>

void display(int arr1[],int size){
	printf("Array : ");
	for(int i=0;i < size;i++){
		if(i < size-1){
			printf("%d,",arr1[i]);
		}
		else {
			printf("%d",arr1[i]);
		}
	}
	printf("\n");
}

void merge(int arr1[],int low,int mid,int high){
	int arr2[100];
	int i,j,k;
	i = low;
	j = mid+1;
	k = low;
	while(i <= mid && j <= high){
		if(arr1[i] < arr1[j]){
			arr2[k] = arr1[i];
			i++;
			k++;
		}
		else {
			arr2[k] = arr1[j];
			j++;
			k++;
		}
	}
	while(i <= mid){
		arr2[k] = arr1[i];
		i++;
		k++;
	}
	while(j <= high){
		arr2[k] = arr1[j];
		j++;
		k++;
	}
	for(int i=0;i<=high;i++){ // or low
		arr1[i] = arr2[i];
	}
}

void mergeSort(int arr1[],int low,int high){
	int mid;
	if(low < high){
		mid = (low+high)/2;
		mergeSort(arr1,low,mid);
		mergeSort(arr1,mid+1,high);
		merge(arr1,low,mid,high);
	}
}

int main(){
	int arr1[] = {12,98,34,76,56,54,78,32,90,10};
	int size = sizeof(arr1)/sizeof(int);
	printf("Before Sorting : \n");
	display(arr1,size);
	mergeSort(arr1,0,size-1);
	printf("After Sorting : \n");
	display(arr1,size);
	return 0;
}