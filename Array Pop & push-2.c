#include<stdio.h>

 void display(int arr[],int size){
 	printf("Array : ");
	for(int i=0;i<size;i++){
    	if(i < size-1){
			printf("%d,",arr[i]);
		}
		else{
			printf("%d",arr[i]);
		} 
	}
} 

void insertion(int arr[],int size){
	int ptr,num;
	for(int i=0;i<=size;i++){
		ptr = i;
	}
	printf("Enter number : ");
	scanf("%d",&num);
	arr[ptr] = num;
	printf("\n");
}

int main(){
	int arr[0];
	int len = sizeof(arr)/sizeof(int);
	int a;
	do{
		printf("\n\n1.Push\n");
		printf("2.Pop\n");
		printf("3.Exit");
		
		printf("\n\nEnter number : ");
		scanf("%d",&a);
		switch(a){
			case 1 :
			printf("\nPush function : \n");
			insertion(arr,len);
			len += 1;
			display(arr,len);
			break;
			
			case 2 :
			printf("\nPop function : \n");
			len -= 1;
			printf("\n");
			display(arr,len);
			break;
			
			case 3 :
			printf("\nExited!!\n");
			break;
			
			default :
			printf("\nEnter number between 1 to 3 to perform functions!!");
			break;
		}
	}while(a>0 && a != 3);
	return 0;
}