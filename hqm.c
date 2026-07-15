#include<stdio.h>
#include<stdlib.h>
#define SIZE 100
int front = -1;
int rear = -1;
char elements[SIZE];

void enque(int val){
	if(rear == SIZE - 1){
		printf("\nQueue is full");
	}
	else{
		if (front == -1){
			front = 0;
		}
		rear++;
		elements[rear] = val;
	}
	printf("enqued %d",val);
}
void deque(){
	if(front == -1){
		printf("Queue is empty");
	}
	else{
		front++;
		if(front > rear){
			front = rear = -1;
		}
	}
	printf("dequed");
}
int main(){
	int size;
	printf("enter the size of que:");
	scanf("%d",&size);
	printf("Option:\t1.Enque \t2.Deque");
	scanf("%d",&n);
	 switch(n){
	 	case 1:
		for(int i = 0;i< size;i++){
			printf("enter value to enque:");
			enque(n);
		}
		break;
		case 2:
			deque();
			break;
		
		
		//implement using struct---------
/*
#include <stdio.h>
#include <stdbool.h>
 
#define queueLength 50

 
int queue[queueLength];
int front = -1,rear = -1;
struct patient {
int arrival,priority;
bool visited;
};
 

 
void enque(int patient) {
if(rear == queueLength-1) {
printf("Queue is full\n");
return;
}
queue[++rear] = patient; 
}
 

 
int deque() {
if(front == rear) {
printf("Queue is empty\n");
return -1;
}
return queue[++front];
}
 

 
void main() {
int n;
printf("Enter number of patients: ");
scanf("%d",&n);
struct patient patients[n];
 
printf("Priority Levels\n1.Emergency\n2.Urgent\n3.Normal\n");
for(int i = 0; i < n; i++) {
printf("Enter priority level of patient %d: ",i+1);
scanf("%d",&patients[i].priority);
printf("Enter arrival time of patient %d: ",i+1);
scanf("%d",&patients[i].arrival);
}
 
int count = 0,patient;
while(count < n) {
int highestPriority = 999,minArrival = 999;
 
for(int i = 0; i < n; i++) {
if(!patients[i].visited) {
if(patients[i].priority < highestPriority) {
highestPriority = patients[i].priority;
minArrival = patients[i].arrival;
patient = i;
} else if(patients[i].priority == highestPriority && patients[i].arrival < minArrival) {
minArrival = patients[i].arrival;
patient = i;  
}
}
}

 
printf("\n");
enque(patient);
patients[patient].visited = true;
count++;
}
 
printf("--Served order---\n");
printf("Patient\tArrival\tPriority\n");
 
while(front != rear) {
int patient = deque();
printf("%d\t%d\t",patient+1,patients[patient].arrival);
if(patients[patient].priority == 1) {
printf("Emergency\n");
} else if(patients[patient].priority == 2) {
printf("Urgent\n");
} else {
printf("Normal\n");
}
}
 
}*/

