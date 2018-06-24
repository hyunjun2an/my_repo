#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100000

char stack[100000];
int top = 0;

void push(char ch){
	stack[top] = ch;
	top ++;
}

char pop(){
	return stack[top--];
}

void main(){
	char string[MAX_SIZE];
	int i, temp = 0;
	
	while(1){
		scanf("%s", string);
		fflush(stdin);

		for(i=0; i<strlen(string); i++){
			if(string[i] == '('){
				push(string[i]);
			}
			else if(string[i] == ')'){
				if(top == 0) {
					printf("false\n");
					temp = 1;
					break;
				}
				else {
					pop();
				}
			}
		}

		if(top==0 && temp != 1) printf("true\n");
		else if (temp != 1) printf("false\n");
		temp = 0;
		top = 0;
	}
}