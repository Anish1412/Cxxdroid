#include<stdio.h>
#include<stdlib.h>
int main(){
	int n;
	int p;
	int* ptr;
	printf("Enter length of the array : ");
	scanf("%d",&n);
	ptr = (int*)calloc(n,sizeof(int));
	
	for(int i=0;i<n;i++){
		scanf("%d",&ptr[i]);
	}
	
	printf("Array : ");
	for(int i=0;i<n;i++){
		if(i<n-1){
		printf("%d,",ptr[i]);
		}
		else{
			printf("%d",ptr[i]);
		}
	}
	printf("\nEnter new length of the array : ");
	scanf("%d",&p);
	ptr = (int*)realloc(ptr,p*sizeof(int));
	for(int i=n;i<p;i++){
		scanf("%d",&ptr[i]);
	}
	printf("New Array : ");
	for(int i=0;i<p;i++){
		if(i<p-1){
		printf("%d,",ptr[i]);
		}
		else{
			printf("%d",ptr[i]);
		}
	}
	return 0;
}