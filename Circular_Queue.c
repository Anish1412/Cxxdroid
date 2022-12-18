#include<stdio.h>
#include<stdlib.h>

struct CQueue {
	int size;
	int front;
	int rear;
	int * arr;
};

int isFull(struct CQueue * q1){
	if(((q1->rear+1)%q1->size) == q1->front){
		return 1;
	}
	else {
		return 0;
	}
}

int isEmpty(struct CQueue * q1){
	if(q1->front  == q1->rear){
		return 1;
	}
	else {
		return 0;
	}
}

void enqueue(struct CQueue * q1,int val){
	q1->rear = (q1->rear+1)%q1->size;
	q1->arr[q1->rear] = val;
	printf("\n%d has been inserted!!\n",val);
}

void dequeue(struct CQueue * q1){
	q1->front = (q1->front+1)%q1->size;
	int val = q1->arr[q1->front];
	printf("\n%d has been deleted!!\n",val);
}

void display(struct CQueue * q1){
	if(q1->rear != q1->front){
		printf("\nCircular Queue : ");
		for(int i=q1->front+1;i<=q1->rear;i++){
			if(i < q1->rear){
				printf("%d,",q1->arr[i]);
			}
			else {
				printf("%d",q1->arr[i]);
			}
			}
			printf("\n");		
	}
	else {
		printf("\nCircular Queue is Empty!!\n");
	}
}

int main(){
	struct CQueue * q1;
	q1 = (struct CQueue*)malloc(sizeof(struct CQueue));
	int sto;
	printf("Enter size : ");
	scanf("%d",&sto);
	q1->size = sto;
	q1->front = 0;
	q1->rear = 0;
	q1->arr = (int*)malloc(q1->size * sizeof(int));
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
			if(isFull(q1)){
				printf("\nCircular Queue is Full!!\n");
			}
			else {
				int val;
				printf("\nEnter number : ");
				scanf("%d",&val);
				enqueue(q1,val);
			}
			break;
			
			case 2:
			if(isEmpty(q1)){
				printf("\nCircular Queue is Empty!!\n");
			}
			else { 
				dequeue(q1);
			}
			break;
			
			case 3:
			display(q1);
			break;
			
			case 4:
			printf("\nExited!!\n");
			break;
			
			default:
			printf("\nEnter number between 1 & 4");
			break;
		}
	}while(a != 4);
	return 0;
}