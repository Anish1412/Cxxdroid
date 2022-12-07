#include<stdio.h>
#include<string.h>

union Bio{
	char name[30];
	int age;
	char address[30];
};
int main(){
	union Bio data;
	strcpy(data.name,"Anish");
	printf("Name : %s",data.name);
	
	data.age = 8500;
	printf("\nAge : %d",data.age);
	
	strcpy(data.address,"Ghansoli");
	printf("\nAddress : %s",data.address);
	
	
// By doing this your integer values get corrupted and will print string value's memory location

/* printf("Name : %s",data.name);
	printf("\nAge : %d",data.age);
	printf("\nAddress : %s",data.address); */
	return 0;
}