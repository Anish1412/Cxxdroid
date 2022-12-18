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

//deletion at first in the circular linked list
struct Node * deletionAtFirst(struct Node * head){
	struct Node * q = head;
	struct Node * p = head;
	while(p -> next != head){
		p = p->next;
	}
	p->next = q->next;
	head = q->next;
	free(q);
	return head;
}

//deletion in between in the circular linked list
struct Node * deletionInBetween(struct Node * head,int index){
	struct Node * p = head;
	struct Node * q = head->next;
	int i=0;
	while(i<index-1){
		p = p->next;
		q = q->next;
		i++;
	}
	p -> next = q -> next;
	free(q);
	return head;
}

//deletion at last in the circular linked list
struct Node * deletionAtLast(struct Node * head){
	struct Node * p = head;
	struct Node * q = head->next;
	while(q->next != head){
		p = p->next;
		q = q->next;
	}
	p -> next = q -> next;
	free(q);
	return head;
}

//deletion after Node in the circular linked list
struct Node * deletionAfterNode(struct Node * head,int node){
	struct Node * p = head;
	struct Node * q = head->next;
	while(q -> data != node){
		p = p -> next;
		q = q -> next;
	}
	p -> next = q -> next;
	free(q);
	return head;
}

int main(){
	struct Node * head;
	struct Node * second;
	struct Node * third;
	struct Node * fourth;
	struct Node * fifth;
	struct Node * sixth;
	struct Node * seventh;
	
 head = (struct Node *)malloc(sizeof(struct Node));
 second = (struct Node *)malloc(sizeof(struct Node));
 third = (struct Node *)malloc(sizeof(struct Node));
 fourth = (struct Node *)malloc(sizeof(struct Node));
  fifth = (struct Node *)malloc(sizeof(struct Node));
  sixth = (struct Node *)malloc(sizeof(struct Node));
  seventh = (struct Node *)malloc(sizeof(struct Node));
	
	head->data = 7;
	head->next = second;
	
	second->data = 14;
	second->next = third;
	
	third->data = 21;
	third->next = fourth;
	
	fourth->data = 28;
	fourth->next = fifth;
	
	fifth->data = 35;
	fifth->next = sixth;
	
	sixth->data = 42;
	sixth->next = seventh;
	
	seventh->data = 49;
	seventh->next = head;
	
	printf("\t**************CIRCULAR LINKED LIST**************");
	printf("\nLinked List : \n");
	display(head);
	printf("\n\nDeleting element at first in the circular linked list : \n");
	head = deletionAtFirst(head);
	display(head);  
	
	printf("\n\nDeleting element in between in the circular linked list : \n");
	int ind;
	printf("Enter index : ");
	scanf("%d",&ind);
	head = deletionInBetween(head,ind);
	display(head);  
	
	printf("\n\nDeleting element at last in the circular linked list : \n");
	head = deletionAtLast(head);
	display(head);
	
	printf("\n\ndeleting element after Node in the circular linked list : \n");
	int num4;
	printf("Enter Node number : ");
	scanf("%d",&num4);
	head = deletionAfterNode(head,num4);
	display(head); 
	return 0;
}