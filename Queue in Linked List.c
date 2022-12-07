#include<stdio.h>
#include<stdlib.h>

struct Node * front = NULL;
struct Node * rear = NULL;
	
	
struct Node {
	int data;
	struct Node * next;
};

int isEmpty(struct Node * front){
	if(front == NULL){
		return 1;
	}
	else {
		return 0;
	}
}

int isFull(struct Node * ptr){
	if(ptr == NULL){
		return 1;
	}
	else {
		return 0;
	}
}

void enqueue(int val){
	struct Node * ptr;
	ptr = (struct Node*)malloc(sizeof(struct Node));
	if(ptr == NULL){
		printf("\nQueue is Full!!\n");
	}
	else {
		ptr->data = val;
		ptr->next = NULL;
		if(front == NULL){
			front = rear = ptr;
		}
		else {
			rear->next = ptr;
			rear = ptr;
		}
	}
}

void dequeue(){
	int val = -1;
	struct Node * ptr = front;
	val = ptr->data;
	front = front->next;
	if(val > -1){
	printf("\n%d has been deleted!!\n",val);
	free(ptr);
	}
	else {
		printf("\ndeletion failed!!\n");
	}
}

void LinkedList_Values(struct Node *ptr){	
	if(ptr != NULL){
		printf("\nQueue in Linked List : \n");
		while(ptr != NULL){
			printf("%d\n",ptr->data);
			ptr = ptr->next;
		}
	}
	else {
		printf("\nQueue is Empty!!\n");
	}
}

int main(){
	printf("Queue in Linked List : \n");
	int a;
	do {
		printf("\n1.Enqueue\n");
		printf("2.Dequeue\n");
		printf("3.Display\n");
		printf("4.Exit\n\n");
		printf("Enter your choice : ");
		scanf("%d",&a);
		switch(a){
			case 1:
	/*		if(isFull(ptr)){
				printf("\nQueue is Full!!\n");
			}
			else { */
				int val;
				printf("\nEnter number : ");
				scanf("%d",&val);
				enqueue(val);
				printf("\n%d has been inserted!!\n",val);			
			//	}
			break;
			
			case 2:
			if(isEmpty(front)){
				printf("\nQueue is Empty!!\n");
			}
			else {
				dequeue();
			}
			break;
			
			case 3:
			LinkedList_Values(front);
			break;
			
			case 4:
			printf("\nExited!!\n");
			break;
			
			default :
			printf("\nEnter number between 1 & 4!!\n");
			break;
		}
	}while(a != 4);
	return 0;
}