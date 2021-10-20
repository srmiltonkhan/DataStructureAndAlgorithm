#include <stdio.h>
#define CAPACITY 3

int stack[CAPACITY];

int top = -1;


void push(int x){
	if(top <CAPACITY-1){
		top = top+1;
		stack[top] = x;
		printf("Successfully add the stack in push method %d\n",x);
	}else{
		printf("No spaces\n");
	}

}

int pop(){
	if(top >=0){
		int val = stack[top];
		top = top-1;
		return val;
	}
	printf("there is no value for pop\n");
	return -1;
}

int peek()
{
	if(top >=0){
		return stack[top];
	}
	printf("Empty Stack!\n");
	return -1;
}
int main(){
	
	printf("Impleting stack is successfully\n");
	peek();
	push(10);
	push(20);
	push(30);
	printf("pop item is %d\n",pop());
	push(40);
	printf("Top of stack peek() is %d",peek());

	
	return 0;
}
