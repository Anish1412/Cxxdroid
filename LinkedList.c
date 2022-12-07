#include<stdio.h>
#include<stdlib.h>

struct Node{
	int data;
	struct Node * next;
};

// Always remember that, methods always be declared below structures else it will not print value

void LinkedList_Values(struct Node *ptr){
	while(ptr != NULL){
			printf("%d\n",ptr->data);
			ptr = ptr->next;
	}
}
int main(){
	struct Node * head;
	struct Node * second;
	struct Node * third;
	struct Node * fourth;
	
	head = (struct Node*)malloc(sizeof(struct Node));
	second = (struct Node*)malloc(sizeof(struct Node));
	third = (struct Node*)malloc(sizeof(struct Node));
	fourth = (struct Node*)malloc(sizeof(struct Node));
	
	head->data = 7;
	head->next = second;
	
	second->data = 14;
	second->next = third;
	
	third->data = 21;
	third->next = fourth;
	
	fourth->data = 28;
	fourth->next = NULL;
	
	LinkedList_Values (head);
	return 0;
}