#include<stdio.h>
#include<string.h>

struct student{
	char name[30];
	int roll;
	char address[30];
};
int main()
{
	struct student s1;
	//to take string values use strcpy(); to surround string value in it in C language
	strcpy(s1.name,"Anish Patil");
	s1.roll = 8500;
	strcpy(s1.address,"Ghansoli");
	
	printf("Name : %s\nRoll No : %d\nAddress : %s",s1.name,s1.roll,s1.address);
	return 0;
}