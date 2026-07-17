#include<stdio.h>
#include<stdlib.h>
#define MAX 100

int stack[MAX];
int top = -1;

int pop() {
    if (top == -1)
        return 0;
    return stack[top--];
}

void push(char val) {
    if (top == MAX - 1) {
        printf("Stack Overflow\n");
        return;
    }
    stack[++top] = val;
}

void enque(int val){
	push(val);
}
int deque(){
	int res =0;
	int val = 0;
	if(top == -1){
		printf("Queue is empty\n");
	}
	else if(top == 0){
		 return pop();
	}
	val = pop();
	res = deque();
	push(val);
	return res;
}

void display(){
	int i;
	for(i=0;i<=top;i++){
		printf("%d\t",stack[i]);
	}
	printf("\n");
}

void main(){
	int choice,val;
	while(1){
		printf("Choice:1)enque\t2)deque\t3)display\t4)exit\n");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("enque:");
				scanf("%d",&val);
				enque(val);
				break;
			case 2:
				deque();
				break;
			case 3:
				display();
				break;
			case 4: 
				exit(1);
			default:
				break;
				
		}
	}
	
}
