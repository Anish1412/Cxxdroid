#include<stdio.h>
#include<stdlib.h>

struct Queue{
	int size;
	int back;
	int * arr;
};

int isEmpty(struct Queue * ptr){
	if(ptr->back == -1){
		return 1;
	}
	else{
		return 0;
	}
}

int isFull(struct Queue * ptr){
	if(ptr->back == ptr->size-1){
		return 1;
	}
	else{
		return 0;
	}
}

void enqueue(struct Queue * ptr,int num){
	ptr->back += 1;
	ptr->arr[ptr->back] = num;
	printf("\nQueue : ");
	for(int i=0;i<=ptr->back;i++){
		if(i < ptr->back){
			printf("%d,",ptr->arr[i]);
		}
		else{
			printf("%d",ptr->arr[i]);
		}
	}
	printf("\n");
}

void dequeue(struct Queue * ptr){
	ptr->back -= 1;
	printf("\nQueue : ");
	for(int i=0;i<=ptr->back;i++){
		ptr->arr[i] = ptr->arr[i+1];
	}
	for(int i=0;i<=ptr->back;i++){
		if(i < ptr->back){
			printf("%d,",ptr->arr[i]);
		}
		else {
			printf("%d",ptr->arr[i]);
		}
	}
	printf("\n");
}

void peekFunction(struct Queue * ptr,int pos){
	int ind = (ptr->back-pos)+1;
	if(ind > -1){
	printf("\n%d is present at Position %d\n",ptr->arr[ind],pos);
	}
	else{
		printf("\nNot a Valid position in the array!!\n");
	}
}

void firstVal(struct Queue * ptr){
	printf("\nThe First Value of Queue is %d\n",ptr->arr[0]);
}

void lastVal(struct Queue * ptr){
	int back = ptr->back;
	printf("\nThe Last Value of Queue is %d\n",ptr->arr[back]);
}

int main(){
	struct Queue * s;
	s = (struct Queue*)malloc(sizeof(struct Queue));
	int num;
	printf("Enter Queue Capacity : ");
	scanf("%d",&num);
	s->size = num;
	s->back = -1;
	s->arr = (int*)malloc(s->size*sizeof(int));
	int a;
	do{
		printf("\n1.Enqueue\n");
		printf("2.Dequeue\n");
		printf("3.Peek\n");
		printf("4.First Value\n");
		printf("5.Last Value\n");
		printf("6.Exit");
		
		printf("\n\nChoose : ");
		scanf("%d",&a);
		switch(a){
			case 1:
			if(isFull(s)){
				printf("\n****** Enqueue function ******");
				printf("\nQueue is Full!!\n");
			}
			else{
				printf("\n****** Enqueue function ******");
				int num;
				printf("\nEnter number : ");
				scanf("%d",&num);
				enqueue(s,num);
			}
			break;
			
			case 2:
			if(isEmpty(s)){
				printf("\n******* Dequeue function ******");                printf("\nQueue is Empty!!\n");
			}
			else{
			printf("\n******* Dequeue function ******");
			dequeue(s);
			}
			break;
			
			case 3:
			printf("\n******* Peek function ******");
			int pos;
			printf("\nEnter position : ");
			scanf("%d",&pos);
			peekFunction(s,pos);
			break;
			
			case 4:
			if(isEmpty(s)){
				printf("\n******  First Value ******");                       printf("\nQueue is Empty!!\n");
			}
			else{
			printf("\n******  First Value ******");
			firstVal(s);
			}
			break;
			
			case 5:
			if(isEmpty(s)){
				printf("\n******  Last Value ******");                printf("\nQueue is Empty!!\n");
			}
			else{
			printf("\n****** Last Value *******");
			lastVal(s);
			}
			break;
			
			case 6:
			printf("\nExited!!\n");
			break;
			
			default:
			printf("Enter number between 1 and 3!!");
			break;
		}
	}while(a != 6);
	return 0;
}