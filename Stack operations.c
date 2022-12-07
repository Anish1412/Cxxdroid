#include<stdio.h>
#include<stdlib.h>

struct Stack{
	int size;
	int top;
	int * arr;
};

int isEmpty(struct Stack * ptr){
	if(ptr->top == -1){
		return 1;
	}
	else{
		return 0;
	}
}

int isFull(struct Stack * ptr){
	if(ptr->top == ptr->size-1){
		return 1;
	}
	else{
		return 0;
	}
}

void pushFunction(struct Stack * ptr,int num){
	ptr->top += 1;
	ptr->arr[ptr->top] = num;
	printf("\nStack : ");
	for(int i=0;i<=ptr->top;i++){
		if(i < ptr->top){
			printf("%d,",ptr->arr[i]);
		}
		else{
			printf("%d",ptr->arr[i]);
		}
	}
	printf("\n");
}

void popFunction(struct Stack * ptr){
	ptr->top -= 1;
	printf("\nStack : ");
	for(int i=0;i<=ptr->top;i++){
		if(i < ptr->top){
			printf("%d,",ptr->arr[i]);
		}
		else{
			printf("%d",ptr->arr[i]);
		}
	}
	printf("\n");
}

void peekFunction(struct Stack * ptr,int pos){
	
	int ind = (ptr->top-pos)+1;
	if(ind > -1){
	printf("\n%d is present at Position %d\n",ptr->arr[ind],pos);
	}
	else{
		printf("\nNot a Valid position in the array!!\n");
	}
}

void stackTop(struct Stack * ptr){
	int top = ptr->top;
	printf("\nThe top position of Stack is %d\n",ptr->arr[top]);
}

void stackBottom(struct Stack * ptr){
	printf("\nThe bottom position of Stack is %d\n",ptr->arr[0]);
}

int main(){
	struct Stack * s;
	s = (struct Stack*)malloc(sizeof(struct Stack));
	int num;
	printf("Enter Stack Capacity : ");
	scanf("%d",&num);
	s->size = num;
	s->top = -1;
	s->arr = (int*)malloc(s->size*sizeof(int));
	int a;
	do{
		printf("\n1.Push\n");
		printf("2.Pop\n");
		printf("3.Peek\n");
		printf("4.Stacktop\n");
		printf("5.Stackbottom\n");
		printf("6.Exit");
		
		printf("\n\nChoose : ");
		scanf("%d",&a);
		switch(a){
			case 1:
			if(isFull(s)){
				printf("\n****** Push function ******");
				printf("\nStack is Full!!\n");
			}
			else{
				printf("\n****** Push function ******");
				int num;
				printf("\nEnter number : ");
				scanf("%d",&num);
				pushFunction(s,num);
			}
			break;
			
			case 2:
			if(isEmpty(s)){
				printf("\n******* Pop function ******");                printf("\nStack is Empty!!\n");
			}
			else{
			printf("\n******* Pop function ******");
			popFunction(s);
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
				printf("\n****** Stack Top ******");                       printf("\nStack is Empty!!\n");
			}
			else{
			printf("\n****** Stack Top ******");
			stackTop(s);
			}
			break;
			
			case 5:
			if(isEmpty(s)){
				printf("\n****** Stack Bottom ******");                printf("\nStack is Empty!!\n");
			}
			else{
			printf("\n****** Stack Bottom *******");
			stackBottom(s);
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