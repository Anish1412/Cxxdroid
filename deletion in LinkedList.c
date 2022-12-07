#include<stdio.h>
#include<stdlib.h>

struct Node{
	int data;
	struct Node * next;
};

// Always remember that, methods always be declared below structures else it will not print value

void linkedList_Values(struct Node *ptr){
	while(ptr != NULL){
	printf("%d\n",ptr->data);
	ptr = ptr->next;
	}
}

//DELETION AT FIRST IN THE LINKED LIST
struct Node * deletionAtFirst(struct Node * head){
	struct Node * ptr = head;
	head = head->next;
	free(ptr);
	return head;
}

//DELETION IN BETWEEN IN THE LINKED LIST
struct Node * deletionInBetween(struct Node * head,int index){
	int i=0,j=0;
	struct Node * p = head;
	struct Node * p1 = head->next;
	while(i<index-1){
		p = p->next;
		i++;
	}
	while(j<index-1){
		p1 = p1->next;
		j++;
	}
	 p->next = p1->next;
	 free(p1);
	 return head;
}

//DELETION AT THE END INDEX IN THE LINKED LIST
struct Node * deleteAtEnd(struct Node * head){
	struct Node * p = head;
	struct Node * p1 = head->next;
	while(p1->next != NULL){
		p = p->next;
		p1 = p1->next;
	}
	p -> next = p1 -> next;
	free(p1);
	return head;
}

//DELETION AFTER THE GIVEN NODE IN THE LINKED LIST -- my code
/* struct Node * deleteAfterNode(struct Node * head,struct Node * third){
	struct Node * p = third;
	struct Node * p1 = head;
	while(p1 -> next != third){
		p1 = p1->next;
	}
	p1->next = p -> next;
	free(p->next);
	return head;
} */

//CodeWithHarry's delete After Node function
struct Node * deleteByValue(struct Node * head, int value){
    struct Node *p = head;
    struct Node *q = head->next;
    while(q->data!=value && q->next!= NULL)
    {
        p = p->next;
        q = q->next;
    }
    
    if(q->data == value){
        p->next = q->next;
        free(q);
    }
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
	
	head = (struct Node*)malloc(sizeof(struct Node));
	second = (struct Node*)malloc(sizeof(struct Node));
	third = (struct Node*)malloc(sizeof(struct Node));
	fourth = (struct Node*)malloc(sizeof(struct Node));
	fifth = (struct Node*)malloc(sizeof(struct Node));
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
	seventh->next = NULL;
	
	printf("\t  ****************LINKED LIST****************\n");
	
	printf("\nLinked list : \n");
	linkedList_Values (head);
	
	printf("\nDeletion of First index in the Linked List : \n");
	head = deletionAtFirst(head);
	linkedList_Values(head);  
	
	printf("\nDeletion in between in the Linked List : \n");
	int num1;
	printf("\nEnter index : ");
	scanf("%d",&num1);
	printf("Deletion of %d index in the Linked List : \n",num1);
	head = deletionInBetween(head,num1);
	linkedList_Values(head);  
	
	printf("\nDeletion of last index in the Linked List : \n");
	head = deleteAtEnd(head);
	linkedList_Values(head);  
	
	//If we want to see the actual result then comment all the methods above --- my code
/*	printf("\nDeletion of the given node in the linked list : \n");
	head = deleteAfterNode(head,third);
	linkedList_Values(head);  */
	
//If we want to see the actual result then comment all the methods above 
//CodeWithHarry's delete After Node function
    printf("\nDeletion of the given value in the linked list : \n");
    int num2;
    printf("Enter number : ");
    scanf("%d",&num2);
    head = deleteByValue(head,num2);
    linkedList_Values(head);
	return 0;
}