#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stdbool.h>
int i =0;
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
bool above(std s) {
	time_t t = time(NULL);
    struct tm *now = localtime(&t);
    int curr_year = now->tm_year + 1900;
    int curr_month = now->tm_mon + 1;
    int curr_day = now->tm_mday;
	int age = curr_year - s.db.year;
	if((curr_month < s.db.month) || ((curr_month == s.db.month )&&(curr_day < s.db.day))){
		return age;
	}
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
		bool res = above(s[i]);
	if (res > 18){
		printf("%s is above 18 years.\n", s[i].name);
	}
    else{
        printf("%s is below 18 years.\n", s[i].name);
     }
	}
	return 0;
}
