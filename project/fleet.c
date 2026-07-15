#include<stdio.h>
#include "logistics.h"
#include <stdlib.h>
#include <string.h>
#define MAX 50

struct Route r;
struct Packages p;
struct Vehicle v;

v fleet[MAX];
int vcount = 0;
void addvehicle(Vehicle v){
	fleet[vcount].vehicleID = id;
	fleet[vcount].maxCapacity = capacity;
	fleet[vcount].currentLoad = load;
	fleet[vcount].status = status;
	vcount++;
}

void traveltime(Route r){
	int trafficmul = r.trafficMultiplier;
	int dist = r.distanceKM;
	
	printf("Enter the distance expected(in km/h):");
	scanf("%d",&dist);
	int Estime = (dist/80) * trafficmul;
	return Estime;
}

void alloc(Package p){
	for(int i=0;i<vcount;i++){
		if((fleet[i].status == "Available") == 0 && (fleet[i].maxCapacity >= p.weight + fleet[i]currentLoad)){
			fleet[i].currentLoad += p.weight;
			
			printf("-----");
			return i;
		}
	}
	printf("---");
	return -1;
}


void show(){
	for(int i = 0; i<vcount;i++){
		printf(fleet[i].vehicleID);
		printf(fleet[i].maxCapacity);
		printf(fleet[i].currentLoad);
		printf(fleet[i].status);
	}
}

int main(){

}
