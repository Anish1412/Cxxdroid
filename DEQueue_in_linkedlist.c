#include<stdio.h>
#include<stdlib.h>

struct Node * front = NULL;
struct Node * rear = NULL;
struct Node {
	int data;
	struct Node * next;
};

int isEmpty(){
	if(front == NULL){
		return 1;
	}
	else {
		return 0;
	}
}

void enqueueRear(int val){
	struct Node * ptr;
	ptr = (struct Node*)malloc(sizeof(struct Node));
	if(ptr == NULL){
		printf("\nDEQueue is Full\n");
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

void enqueueFront(int val){
	struct Node * ptr;
	ptr = (struct Node*)malloc(sizeof(struct Node));
	if(ptr == NULL){
		printf("\nDEQueue is Full\n");
	}
	else {
		ptr->data = val;
		ptr->next = front;
		if(front == NULL){
			front = rear = ptr;
			ptr->next = NULL;
		}
		else {
			front = ptr;
		}
	}
}

void dequeueFront(){
	struct Node * ptr = front;
	front = front->next;
	printf("\n%d has been deleted at Front!!\n\n",ptr->data);
	free(ptr);
}

void dequeueRear(){
	struct Node * ptr = front;
	struct Node * ptr1 = front->next;
	while(ptr1->next != NULL){
		ptr = ptr->next; 
		ptr1 = ptr1->next;
	}
	ptr->next = ptr1->next;
	printf("\n%d has been deleted at Rear!!\n\n",ptr1->data);
	rear = ptr;
	free(ptr1);
}

void display(){
	if(front != NULL){
		printf("\nDEQueue in Linked List : \n");
		struct Node * ptr = front;
		while(ptr != NULL){
			printf("%d\n",ptr->data);
			ptr = ptr->next;
		}
		printf("\n");
	}
	else {
		printf("\nDEQueue is Empty!!\n\n");
	}
}

int main(){
	int a;
	printf("DEQueue in Linked List : \n");
	do {
		printf("1.EnqueueRear\n");
		printf("2.EnqueueFront\n");
		printf("3.DequeueFront\n");
		printf("4.DequeueRear\n");
		printf("5.Display\n");
		printf("6.Exit\n\n");
		printf("Enter your choice : ");
		scanf("%d",&a);
		switch(a){
			case 1:
			int val;
			printf("\nEnter number : ");
			scanf("%d",&val);
			enqueueRear(val);
			printf("\n%d has been inserted at Rear!!\n\n",val);
			break;
			
			case 2:
			int val1;
			printf("\nEnter number : ");
			scanf("%d",&val1);
			enqueueFront(val1);
			printf("\n%d has been inserted at Front!!\n\n",val1);
			break;
			
			case 3:
			if(isEmpty()){
				printf("\nDEQueue is Empty!!\n\n");
			}
			else {
				dequeueFront();
			}
			break;
			
			case 4:
			if(isEmpty()){
				printf("\nDEQueue is Empty!!\n\n");
			}
			else {
				dequeueRear();
			}
			break;
			
			case 5:
			display();
			break;
			
			case 6:
			printf("\nExited!!\n\n");
			break;
			
			default:
			printf("\nEnter number between 1 & 4!!\n\n");
			break;
		}
	}while(a != 6);
	return 0;
}