#include<stdio.h>
#include<stdlib.h>

struct Stack {
	int size;
	int top;
	char * arr;
};

int isEmpty(struct Stack * s1){
	if(s1->top <= -1){
		return 1;
	}
	else {
		return 0;
	}
}

void pushFunction(struct Stack * s1,char ch){
	s1->top += 1;
	s1->arr[s1->top] = ch;
/*	for(int i=0;i<=s1->top;i++){
		if(i < s1->top){
			printf("%c,",s1->arr[i]);
		}
		else {
			printf("%c",s1->arr[i]);
		}
	}  */
}

void popFunction(struct Stack * s1){
	s1->top -= 1;
/*	for(int i=0;i<=s1->top;i++){
		if(i < s1->top){
			printf("%c,",s1->arr[i]);
		}
		else {
			printf("%c",s1->arr[i]);
		}
	}  */
}

int parenthesisMatching(char * exp){
	struct Stack * s1;
	s1 = (struct Stack*)malloc(sizeof(struct Stack));
	s1->size = sizeof(exp);
	s1->top = -1;
	s1->arr = (char*)malloc(s1->size * sizeof(char));
	
	for(int i=0; exp[i]!='\0' ;i++){
		if(exp[i] == '('){
			pushFunction(s1,'(');
		}
		else if(exp[i] == ')'){
			if(isEmpty(s1)){
				return 0;
			}
			else {
				popFunction(s1);
			}
		}
	}
	
	if(isEmpty(s1)){
		return 1;
	}
	else {
		return 0;
	}  
}

int main(){
	char * ch = "3*2+(8+3))";
	if(parenthesisMatching(ch)){
		printf("Parenthesis is Matching!!");
	}
	else {
		printf("Parenthesis is not Matching!!");
	}
	return 0;
}