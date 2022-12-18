//COPY THIS CODE AND RUN OUTSIDE THIS FILE IF IT GIVES ERROR

#include<stdio.h>
#include<stdlib.h>

struct Node{
	int data;
	struct Node * next;
};

void traversal(struct Node * ptr){
	printf("Linked List : \n");
	while(ptr != NULL){
	printf("%d\n",ptr->data);
	ptr = ptr->next;
	}
}

struct Node * insertion(struct Node * top,int num){
	struct Node * ptr = (struct Node*)malloc(sizeof(struct Node));
	ptr->data = num;
	ptr->next = top;
	top = ptr;
	return top;
}

struct Node * deletion(struct Node * top){
	struct Node * ptr = top;
	ptr = ptr->next;
	return ptr;
}

void stackTop(struct Node * top){
	struct Node * ptr = top;
	if(ptr != NULL){
	printf("\nThe top position of Stack is %d\n",ptr->data);
	}
	else{
		printf("\nThere is no top position because, Stack is Empty!!\n");
	}
}

void stackBottom(struct Node * top){
	struct Node * ptr = top;
	if(ptr != NULL){
	while(ptr->next != NULL){
		ptr = ptr->next;
	}
	printf("\nThe bottom position of Stack is %d\n",ptr->data);
	}
	else {
		printf("\nThere is no bottom position because, Stack is Empty!!\n");
	}
}

void peekFunction(struct Node * top,int pos){
	struct Node * ptr = top;
	int i=0;
	while(i < pos-1 && ptr != NULL){
		ptr = ptr->next;
		i++;
	}
	if(ptr != NULL){
		printf("\n%d is present at %d\n\n",ptr->data,pos);
	}
	else {
		printf("\nInvalid position!!\n\n");
	}
}

int main(){
	struct Node * top = NULL;
/*	struct Node * second;
	struct Node * third;
	struct Node * fourth;  */
	
//	top = (struct Node*)malloc(sizeof(struct Node));
/*	second = (struct Node*)malloc(sizeof(struct Node));
	third = (struct Node*)malloc(sizeof(struct Node));
	fourth = (struct Node*)malloc(sizeof(struct Node)); */
	
/*	top->data = 34;
	top->next = NULL;  */
	
/*	second->data = 87;
	second->next = third;
	
	third->data = 65;
	third->next = fourth;
	
	fourth->data = 72;
	fourth->next = NULL;  */
	
	printf("\t     ******** Stack in Linked List ********\n\n");
	int a;
	do{
		printf("1.Traversal\n");
		printf("2.Insertion\n");
		printf("3.Deletion\n");
		printf("4.Peek\n");
		printf("5.StackTop\n");
		printf("6.StackBottom\n");
		printf("7.Exit\n\n");
		
		printf("Choose : ");
		scanf("%d",&a);
		switch(a){
			case 1:
			printf("\n");
			if(top != NULL){
			traversal(top);
			}
			else{
				printf("Stack is Empty!!\n");
			}
			printf("\n");
			break;
			
			case 2:
		    int num;
			printf("Enter number : ");
			scanf("%d",&num); 
			top = insertion(top,num);
			printf("\n");
			traversal(top);
			printf("\n");
			break;
			
			case 3:
			top = deletion(top);
			printf("\n");
			if(top != NULL){
			traversal(top);
			}
			else {
				printf("Stack is Empty!!\n");
			}
			printf("\n");
			break;
			
			case 4:
			int pos;
			printf("\nEnter position : ");
			scanf("%d",&pos);
			if(pos >= 1){
				peekFunction(top,pos);
			}
			else {
				printf("\nInvalid position!!\n");
			}
			break;
			
			case 5:
		    stackTop(top);
			printf("\n");
			break;
			
			case 6:
			stackBottom(top);
			printf("\n");
			break;
			
			case 7:
			printf("\nExited!!\n");
			break;
			
			default:
			printf("\nEnter number between 1 and 4!!\n\n");
			break;
		}
	}while(a != 7);
	
	return 0;
}