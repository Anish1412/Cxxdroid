#include<stdio.h>
#include<stdlib.h>

struct Node{
	int data;
	struct Node * next;
};
//My Code
void display(struct Node * head){
	struct Node * ptr = head;
	while(ptr->next!= head){
		printf("%d\n",ptr->data);
		ptr = ptr->next;
	}
	printf("%d",ptr->data);
}

//CodeWithHarry's code
void traversal(struct Node * head){
	struct Node * ptr = head;
	do{
		printf("%d\n",ptr->data);
		ptr = ptr->next;
	}while(ptr!= head);
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
	printf("My traversal : \n");
	display(head);
	printf("\n\nCodeWithHarry traversal : \n");
	traversal(head);
	return 0;
}