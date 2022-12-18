#include<stdio.h>
#include<string.h>

struct student{
	char name[30];
	int roll;
	char address[30];
};
int main()
{
 struct student s1{"Anish Patil",8500,"Ghansoli"};
	
	printf("Name : %s\nRoll No : %d\nAddress : %s",s1.name,s1.roll,s1.address);
	return 0;
}