#include<stdio.h>
#include<stdlib.h>
#include <ctype.h>
#define MAX 100
char stack[MAX];
int top = -1;
char pop() {
    if (top == -1)
        return '\0';
    return stack[top--];
}
void push(char val) {
    if (top == MAX - 1) {
        printf("Stack Overflow\n");
        return;
    }
    stack[++top] = val;
}
int precedence(char sym){
	switch(sym){
		case '^': return 3;
		case '*': case '/': return 2;
		case '+': case '-': return 1;
		default: return 0;
	}
}
void infixtopostfix(char infix[],char postfix[]){
	int i = 0, j = 0;
   char sym;
   while (infix[i] != '\0') {
      sym = infix[i];

      if (sym == ' ') {
         i++;
         continue;
      }
      if (sym == '(')
         push(sym);
      else if (isalpha(sym))
         postfix[j++] = sym;
      else if (sym == ')') {
         while (top != -1 && stack[top] != '(')
            postfix[j++] = pop();
         pop();
      } 
      else {
         while (top != -1 && precedence(stack[top]) >= precedence(sym))
            postfix[j++] = pop();
         push(sym);
      }
      i++;
   }
   while (top != -1)
    postfix[j++] = pop();
   postfix[j] = '\0';
}
int main(){
	char infix[MAX],postfix[MAX]; 
	printf("Enter an infix expression:");
	scanf("%s",infix);
	infixtopostfix(infix, postfix);
   printf("Postfix Expression: %s\n", postfix);
   return 0;
}
	
	

