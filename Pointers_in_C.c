#include<stdio.h>

int main(){
	int age = 45;
	int* ptr = &age;
	printf("Pointer : %p",ptr);
	printf("\nValue : %d",*ptr);
	return 0;
}