#include<stdio.h>
#include<stdlib.h>
typedef struct Node{
	int coeff;
	int expo;
	struct Node *next;
}node;

node *head1 = NULL;
node *head2 = NULL;



void insert(node *head,int coeff,int expo){
	node *new = (node*)malloc(sizeof(node));
	new->coeff = coeff;
	new->expo = expo;
	new->next = NULL;
	
	if(head == NULL){
		head = new;
		return;
	}
	
	node *temp = head;
	while(temp->next != NULL){
		temp = temp->next;
	}
	temp->next = new;
}
void show(){
	node *temp1 = head1;
	node *temp2 = head2;
	
	while(temp!=NULL){
		printf("%dx^%d->",temp->coeff,temp->expo);
		temp = temp->next;
	}
	printf("NULL\n");
}
int main(){
	int n,coeff,expo;
	for (int j = 0; j < 2; j++){
		printf("Enter number of nodes:");
		scanf("%d",&n);
		for(int i = 0;i<n;i++){
			printf("coeff and expo:");
			scanf("%d%d",&coeff,&expo);
		}
		insert(head1,coeff,expo);
		insert(head2,coeff,expo);
		show();
	}
	return 0;
}

