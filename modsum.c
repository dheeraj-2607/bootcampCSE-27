#include<stdio.h>
#include<stdlib.h>
int csum(int a,int b){
	int sum = a + b;
	return sum;
}
void main(int argc,char *argv[]){
	int sum = 0;
	if (argc!=6){
		printf("Invlid");
	}
	for(int i = 1;i<=5;i++){

		sum = csum(sum,atoi(argv[i]));
	}
	printf("Sum:%d",sum); 
}

