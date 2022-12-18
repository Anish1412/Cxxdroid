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

//Deletion
void indDeletion(int num[],int storage,int len,int ind){
	if(len>=storage){
		printf("Space is not available");
	}
		for(int i=ind+1;i<len;i++){
			num[i-1] = num[i];
		}
}

int main()
{
	int num[100] = {12, 34, 56, 78, 90};
	int size = 5;
	display(num, size);
	int capacity = sizeof(num) / sizeof(int);
	int index;
	for(int i=0;i<2;i++){
		printf("\nEnter index number : ");
	    scanf("%d",&index);
    	indDeletion(num,capacity,size,index);
    	size -= 1;
    	printf("\nArray : ");
	    display(num, size);
	}
	return 0;
}