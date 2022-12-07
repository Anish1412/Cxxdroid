#include<stdio.h>
#include<stdlib.h>

struct Node{
	int data;
	struct Node * next;
};

//LINKED LIST
void linkedListValues(struct Node * ptr){
	while(ptr != NULL){
	printf("%d\n",ptr->data);
	ptr = ptr->next;
	}
}

//INSERTION AT FIRST IN LINKED LIST
struct Node * insertionAtFirst(struct Node * head,int data){
	struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
	ptr->data = data;
	ptr->next = head;
	head = ptr;
	return ptr;
	}

//INSERTION IN BETWEEN THE LINKED LIST
struct Node * insertionInBetween(struct Node * head,int index,int data){
	struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
	ptr->data = data;
	struct Node * p = head;
	int i=0;
	while(i < index-1){
		p = p->next;
		i++;
	}
	ptr->next = p->next;
	p->next = ptr;
	return head;
} 

//INSERTION AT END IN THE LINKED LIST
struct Node * insertionAtEnd(struct Node * head,int data){
	struct Node * ptr = (struct Node*)malloc(sizeof(struct Node));
	ptr->data = data;
	struct Node * p = head;
	while(p->next != NULL){
		p = p->next;
	}
	ptr->next = p->next;
	p->next = ptr;
	return head;
}

//INSERTION AFTER A GIVEN NODE IN LINKEDLIST
struct Node * insertionAfterNode(struct Node * head,struct Node * second,int data){
	struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
	ptr->data = data;
	struct Node * prevNode = second;
	ptr -> next = prevNode -> next;
	prevNode -> next = ptr;
	return head;
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
	
	head->data = 12;
	head->next = second;
	
	second->data = 34;
	second->next = third;
	
	third->data = 56;
	third->next = fourth;
	
	fourth->data = 78;
	fourth->next = NULL;
	
	printf("\t  ****************LINKED LIST****************\n");
	
	printf("\nLinked list : \n");
	linkedListValues(head);
	
	printf("\nInsertion at first in above given linked list : ");
	int num1;
	printf("\nEnter Number : ");
	scanf("%d",&num1);
	printf("\nInsertion at first index in linked list : %d\n",num1);
	head = insertionAtFirst(head,num1);
	linkedListValues(head);  
	
	//It doesn't work if add number at index 0 and last index it is made just to add numbers in between (it can to last index but not first)
	
	printf("\nInsertion in between in above given linked list : ");
	int ind,num2;
	printf("\nEnter Number : ");
	scanf("%d",&num2);
	printf("Enter Index no : ");
	scanf("%d",&ind);
	printf("\nInsertion of %d in between linked list at index : %d\n",num2,ind);
	head = insertionInBetween(head,ind,num2);
	linkedListValues(head);  
	
	printf("\nInsertion at End in above given linked list : ");
	int num3;
	printf("\nEnter Number : ");
	scanf("%d",&num3);
	printf("\nInsertion at last index in linked list : %d\n",num3);
	head = insertionAtEnd(head,num3);
	linkedListValues(head);  
	
	printf("\nInsertion after given node in above given linked list : ");
	int num4;
	printf("\nEnter Number : ");
	scanf("%d",&num4);
	printf("\nInsertion after given node in linked list : %d\n",num4);
	insertionAfterNode(head,second,num4);
	linkedListValues(head);
	return 0;
}