#include<stdio.h>
int main(){
	int i,num;
	int arr[] = {12,34,56,78,90};
	for(int i=0;i<5;i++){
		if(i<4){
		printf("%d,",arr[i]);
		}
		else{
			printf("%d",arr[i]);
		}
	}
	
//	printf("\nEnter index number : ");
//	scanf("%d",&i);
	printf("\nEnter joining number : \n");
	for(int i=5;i<10;i++){
	scanf("%d",&num);
	arr[i] = num;
	}
	
	for(int i=0;i<10;i++){
		if(i<9){
		printf("%d,",arr[i]);
		}
		else{
			printf("%d",arr[i]);
		}
	}
	return 0;
}