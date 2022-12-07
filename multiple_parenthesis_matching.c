#include<stdio.h>
#include<stdlib.h>

struct Stack {
	int size;
	int top;
	char * arr;
};

int isEmpty(struct Stack * s1){
	if(s1->top == -1){
		return 1;
	}
	else {
		return 0;
	}
}

int match(char a,char b){
	if(a == '(' && b == ')'){
		return 1;
	}
	if(a == '[' && b == ']'){
		return 1;
	}
	if(a == '{' && b == '}'){
		return 1;
	}
	return 0;
}

void pushFunction(struct Stack * s1,char ch){
	s1->top += 1;
	s1->arr[s1->top] = ch;
}

int popFunction(struct Stack * s1){
	int val = s1->arr[s1->top];
	s1->top -= 1;
	return val;
}

int parethesisMatching(char * exp){
	struct Stack * s1;
	s1 = (struct Stack*)malloc(sizeof(struct Stack));
	s1->size = sizeof(exp);
	s1->top = -1;
	s1->arr = (char*)malloc(s1->size*sizeof(char));
	int popped_ch;
	
	for(int i=0;exp[i] != '\0';i++){
		if(exp[i] == '(' || exp[i] == '[' || exp[i] == '{'){
			pushFunction(s1,exp[i]);
		}
		else if(exp[i] == ')' || exp[i] == ']' || exp[i] == '}'){
			if(isEmpty(s1)){
				return 0;
			}
			else {
				popped_ch = popFunction(s1);
				if(!match(popped_ch,exp[i])){
					return 0;
				}
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
	char * ch = "{7-(3-2)+[8+(99-11)]}";
	if(parethesisMatching(ch)){
		printf("Parenthesis is balanced!!");
	}
	else {
		printf("Parenthesis is not balanced!!");
	}
	return 0;
}