#include<iostream>
#include<string>
using namespace std;
void myNumbers(int numbers[5]){
	printf("Array 1 : ");
	for(int i=0;i<5;i++){
		if(i<4){
		cout<<numbers[i]<<",";
		}
		else{
			cout<<numbers[i];
		}
	}
}
int main(){
	int numbers[5] = {30,50,80,20,70};
	myNumbers(numbers);
	int num[5];
	num[0] = 98;
	num[1] = 76;
	num[2] = 65;
	num[3] = 54;
	num[4] = 32;
	printf("\nArray 2 : ");
	for(int i=0;i<5;i++){
		if(i<4){
			printf("%d,",num[i]);
		}
		else{
			printf("%d",num[i]);
		}
	}
	return 0;
}