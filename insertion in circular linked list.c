#include<stdio.h>
#include<stdlib.h>

struct Node{
	int data;
	struct Node * next;
};

void display(struct Node * head){
	struct Node * ptr = head;
	while(ptr->next != head){
		printf("%d\n",ptr->data);
		ptr = ptr->next;
	}
	printf("%d",ptr->data);
}

//Insertion at first in the circular linked list
struct Node * insertionAtFirst(struct Node * head,int data){
	struct Node * ptr = (struct Node*)malloc(sizeof(struct Node));
	struct Node * p = head;
	ptr->data = data;
	while(p != head){
		p = p->next;
	}
	ptr->next = p->next;
	p->next = ptr;
	return ptr;
}

//Insertion in between in the circular linked list
struct Node * insertionInBetween(struct Node * head,int index,int data){
	struct Node * ptr = (struct Node*)malloc(sizeof(struct Node));
	ptr->data = data;
	struct Node * p = head;
	int i=0;
	while(i<index-1){
		p = p->next;
		i++;
	}
	ptr -> next = p->next;
	p->next = ptr;
	return head;
}

//Insertion at last in the circular linked list
struct Node * insertionAtLast(struct Node * head,int data){
	struct Node * ptr = (struct Node*)malloc(sizeof(struct Node));
	ptr->data = data;
	struct Node * p = head;
	while(p->next != head){
		p = p->next;
	}
	ptr->next = p->next;
	p->next = ptr;
	return head;
}

//Insertion after Node in the circular linked list
struct Node * insertionAfterNode(struct Node * head,int node,int data){
	struct Node * p = head;
	while(p->data != node){
		p = p->next;
	}
	struct Node * ptr = (struct Node*)malloc(sizeof(struct Node));
	ptr->data = data;
	ptr->next = p->next;
	p->next = ptr;
	return head;
}

int main(){
	struct Node * head;
	struct Node * second;
	struct Node * third;
	struct Node * fourth;
	
 head = (struct Node *)malloc(sizeof(struct Node));
 second = (struct Node *)malloc(sizeof(struct Node));
 third = (struct Node *)malloc(sizeof(struct Node));
 fourth = (struct Node *)malloc(sizeof(struct Node));
	
	head->data = 7;
	head->next = second;
	
	second->data = 14;
	second->next = third;
	
	third->data = 21;
	third->next = fourth;
	
	fourth->data = 28;
	fourth->next = head;
	
	printf("\t**************CIRCULAR LINKED LIST**************");
	printf("\nLinked List : \n");
	display(head);
	printf("\n\nInserting element at first in the circular linked list : \n");
	int num1;
	printf("Enter number : ");
	scanf("%d",&num1);
	printf("\nInsertion at first : %d\n",num1);
	head = insertionAtFirst(head,num1);
	display(head);
	
	printf("\n\nInserting element in between in the circular linked list : \n");
	int num2,ind;
	printf("Enter number : ");
	scanf("%d",&num2);
	printf("Enter index : ");
	scanf("%d",&ind);
	printf("\nInsertion in between : %d\n",num2);
	head = insertionInBetween(head,ind,num2);
	display(head);
	
	printf("\n\nInserting element at last in the circular linked list : \n");
	int num3;
	printf("Enter number : ");
	scanf("%d",&num3);
	printf("\nInsertion at last : %d\n",num3);
	head = insertionAtLast(head,num3);
	display(head);
	
	printf("\n\nInserting element after Node in the circular linked list : \n");
	int num4;
	printf("Enter number : ");
	scanf("%d",&num4);
	int node;
	printf("Enter node number : ");
	scanf("%d",&node);
	printf("\nInsertion after Node : %d\n",num4);
	head = insertionAfterNode(head,node,num4);
	display(head);
	return 0;
}