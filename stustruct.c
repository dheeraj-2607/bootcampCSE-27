#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stdbool.h>
int i =0;
int sum = 0;
typedef struct dob{
		int day;
		int month;
		int year;
}db;
typedef struct student {
	char name[20];
	int roll_no;
	db db;
	int marks;
}std;
int avgmark(int sum,int n) {
	float avg = sum/n;
	return avg; 
}
int main(){
	std s[30];
	int n;
	printf("Enter number of students:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("\nEnter the name of the student:");
		scanf("%s",s[i].name);
		printf("\nEnter roll no of %s:",s[i].name);
		scanf("%d",&s[i].roll_no);
		printf("Enter dob of %s:",s[i].name);
		scanf("%d%d%d",&s[i].db.day,&s[i].db.month,&s[i].db.year);
		printf("Enter the mark of %s:",s[i].name);
		scanf("%d",&s[i].marks);
		sum = sum + s[i].marks ;
	}
	float avg = avgmark(sum,n);
	printf("\nAverage mark:%.2f",avg);
	return 0;
}
