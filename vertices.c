#include<stdio.h>
#include<stdlib.h>
int i,j;
int vert;
int dist[50][50];
void displayconn(){
    printf("Enter number of vertices: ");
    scanf("%d", &vert);
    for(i = 0; i < vert; i++){
        for(j = 0; j < vert; j++){
            if(i == j){
                dist[i][j] = 0;
            }
            else if(i < j){
                printf("Enter distance from %d to %d: ", i, j);
                scanf("%d", &dist[i][j]);
            }
            else{
                dist[i][j] = dist[j][i];
            }
        }
    }
    printf("\nDistance Matrix:\n");
    for(i = 0; i < vert; i++){
        for(j = 0; j < vert; j++){
            printf("%4d", dist[i][j]);
        }
        printf("\n");
    }
}

void shortest(){
	for(i = 0;i<vert;i++){
		for(j=0;j<vert;j++){
			dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
		}
	}
}

void totaldist(){
	

}

 int main(){
 	int choice;
 	printf("Choice:");
 	scanf("%d",&choice);
 	switch(choice){
 		case 1:
			displayconn();
			break;
		case 2:
			shortest();
			break;
		case 3:
			totaldist();
			break;
		default:
			break;
 	}
 }
