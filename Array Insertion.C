#include <stdio.h>
//Traversal
void display(int num[], int len)
{
	for (int i = 0; i < len; i++)
	{
		if (i < len - 1)
		{
			printf("%d,", num[i]);
		}
		else
		{
			printf("%d", num[i]);
		}
	}
}

//Insertion
void indInsertion(int num[],int storage,int len,int ind,int elem){
	if(len>=storage){
		printf("Space is not available");
	}
		for(int i=len-1;i>=ind;i--){
			num[i+1] = num[i];
		}
		num[ind] = elem;
}
int main()
{
	int num[100] = {12, 34, 56, 78, 90};
	int size;
	printf("Enter using space out of 100 : ");
	scanf("%d",&size);
	display(num, size);
	int capacity = sizeof(num) / sizeof(int);
	int index;
	int element;
	for(int i=0;i<2;i++){
	printf("\nEnter index number : ");
	scanf("%d",&index);
	printf("Enter element : ");
	scanf("%d",&element);
	indInsertion(num,capacity,size,index,element);
	size += 1;
	}
	printf("\nArray : ");
	display(num, size);
	return 0;
}