#include<stdio.h>
#include<stdlib.h>

struct Queue {
	int size;
	int front;
	int rear;
	int * arr;
};

int isEmpty(struct Queue * q){
	if(q->rear == -1 || q->front == q->size){
		return 1;
	}
	return 0;
}

int isFull(struct Queue * q){
	if(q->rear == q->size-1){
		return 1;
	}
	return 0;
}

void enqueue(struct Queue * q,int val){
			q->rear += 1;
			q->arr[q->rear] = val;
}

void dequeue(struct Queue * q){
	int a;
		q->front += 1;
		a = q->arr[q->front];
		printf("\nThe deleted element is %d\n\n",a);
		if(q->front == q->rear){
		q->front = q->rear = -1;
	}
}

void display(struct Queue * q){
	if(q->front != q->rear){
		printf("\nQueue : ");
		for(int i=q->front+1;i<=q->rear;i++){
		if(i < q->rear){
			printf("%d,",q->arr[i]);
		}
		else {
			printf("%d",q->arr[i]);
		}
	}
	}
	else {
		printf("\nQueue is Empty!!");
	} 
	printf("\n\n");
}

int main(){
	struct Queue * q;
	q = (struct Queue*)malloc(sizeof(struct Queue));
	int size;
	printf("Enter Queue Size : ");
	scanf("%d",&size);
	printf("\n");
	q->size = size;
	q->front = -1;
	q->rear = -1;
	q->arr = (int*)malloc(q->size*sizeof(int));
	
	int a1;
	do{
	printf("Queue operation : \n");
	printf("1.Insert\n");
	printf("2.Delete\n");
	printf("3.Display\n");
	printf("4.Exit\n\n");
	
	printf("Enter your Choice : ");
	scanf("%d",&a1);
	switch(a1){
		case 1:
		if(isFull(q)){
			printf("\nQueue is Full!!\n\n");
		}
		else {
		int val;
		printf("\nEnter number : ");
		scanf("%d",&val);
		enqueue(q,val);
		printf("\n%d has been inserted\n",val);
		printf("\n");
		}
		break;
		
		case 2:
		if(isEmpty(q)){
			printf("\nQueue is Empty\n\n");
		}
		else {
			dequeue(q);
		}
		break;
		
		case 3:
		display(q);
		break;
		
		case 4:
		printf("\nExited!!\n");
		break;
		
		default:
		printf("\nEnter choice between 1 & 4!!\n");
		break;
	}
	}while(a1 != 4);
	return 0;
}