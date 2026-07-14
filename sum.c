#include<stdio.h>
#include<stdlib.h>
int csum(int a,int b){
	int sum = a + b;
	return sum;
}
void main(int argc,char *argv[]){
	if (argc!=3){
		printf("Invlid");
	}
	char a = atoi(argv[1]);
	char b = atoi(argv[2]);
	int sum = csum(a,b);
	printf("Sum:%d",sum); 
}

