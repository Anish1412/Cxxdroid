#include<stdio.h>
#include<conio.h>
int main(){
	int a,b;
	printf("Enter number 1 : ");
	scanf("%d",&a);
	printf("Enter number 2 : ");
	scanf("%d",&b);
	int c = (a>b)?printf("Correct"):printf("Incorrect");
	return 0;
}