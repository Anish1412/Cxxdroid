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

void linearSearch(int arr[],int ele,int len){
	int ind = 0;
	for(int i=0;i<len;i++){
		if(ele == arr[i]){
			ind += i;
		}
	}
	if(ind != 0){
	printf("\n%d is present at index %d in the array!!",ele,ind);
	}
	else{
		printf("\n%d is not present in the array!!",ele);
	}
}

int main(){
	int arr[] = {98,12,76,34,54,56,43,78,21,90};
	int size = sizeof(arr)/sizeof(int);
	display(arr,size);
	int num;
	printf("\nEnter number : ");
	scanf("%d",&num);
	linearSearch(arr,num,size);
	return 0;
}