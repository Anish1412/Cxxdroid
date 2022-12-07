#include<stdio.h>
#include<stdlib.h>
#include<string.h>

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

int oper(char ch){
		if(ch == '+' || ch == '-' || ch == '*' || ch == '/'){
			return 1;
		}
		else {
			return 0;
		}
}

int stackTop(struct Stack * s1){
	int val = s1->arr[s1->top];
	return val;
}

int precedence(char ch){
	if(ch == '*' || ch == '/'){
		return 2;
	}
	else if(ch == '+' || ch == '-') {
		return 1;
	}
	else {
		return 0;
	}
}

void pushFunction(struct Stack * s1,char ch){
	s1->top += 1;
	s1->arr[s1->top] = ch;
}

char popFunction(struct Stack * s1){
	char val = s1->arr[s1->top];
	s1->top -= 1;
	return val;
}

char * infixToPostfix(char * exp){
	struct Stack * s1;
	s1 = (struct Stack*)malloc(sizeof(struct Stack));
	s1->size = strlen(exp)+1;
	s1->top = -1;
	s1->arr = (char*)malloc(s1->size *sizeof(char));
	char * postFix = (char*)malloc((strlen(exp)+1) * sizeof(char));
	int i=0;
	int j=0;
	while(exp[i] != '\0'){
		if(!oper(exp[i])){
			postFix[j] = exp[i];
			j++;
			i++;
		}
		else {
			if(precedence(exp[i]) > precedence(stackTop(s1))){
				pushFunction(s1,exp[i]);
				i++;
			}
			else if(precedence(exp[i]) <= precedence(stackTop(s1))){
				postFix[j] = popFunction(s1);
				j++;
			}
		}  
	//	i++;
	}
while(!isEmpty(s1)){
	postFix[j] = popFunction(s1);
	j++;
}
postFix[j] = '\0';
return postFix;
}

int main(){
	char * ch = "x-y/z-k*d";
	printf("The position is %s",infixToPostfix(ch));
	return 0;
}