#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct myArray{
	char name[30];
	int age;
	char address[40];
};

 void display(struct myArray* Bio){
	printf("Name : %s\n",Bio->name);
	printf("Roll No : %d\n",Bio->age);
	printf("Address : %s",Bio->address);
} 

int main(){
	struct myArray * Marks;
	
	Marks = (struct myArray*)malloc(sizeof(struct myArray));
	strcpy(Marks->name,"Anish Patil");
	Marks->age = 8500;
	strcpy(Marks->address,"Ghansoli");
	
	display(Marks);
	return 0;
}