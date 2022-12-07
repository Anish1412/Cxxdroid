#include<stdio.h>
#include<stdlib.h>

struct Node{
	struct Node * prev;
	int data;
	struct Node * next;
};

void display(struct Node * head){
	struct Node * p = head;
	while(p->next != NULL){
	printf("%d\n",p->data);
	p = p ->next;
	}
	printf("%d",p->data);
	
	printf("\n\nReverse of linked list : \n");
	while(p->prev != NULL){
		printf("%d\n",p->data);
		p = p->prev;
	}
	printf("%d",p->data);
}

int main(){
	struct Node * head;
	struct Node * second;
	struct Node * third;
	struct Node * fourth;
	struct Node * fifth;
	
	head = (struct Node *)malloc(sizeof(struct Node));
	second = (struct Node *)malloc(sizeof(struct Node));
	third = (struct Node *)malloc(sizeof(struct Node));
	fourth = (struct Node *)malloc(sizeof(struct Node));
	fifth = (struct Node *)malloc(sizeof(struct Node));
	
	head->prev = NULL;
	head->data = 7;
	head->next = second;
	
	second->prev = head;
	second->data = 14;
	second->next = third;
	
	third->prev = second;
	third->data = 21;
	third->next = fourth;
	
	fourth->prev = third;
	fourth->data = 28;
	fourth->next = fifth;
	
	fifth->prev = fourth;
	fifth->data = 35;
	fifth->next = NULL;
	
	printf("Doubly Linked List : \n");
	display(head);
	return 0;
}