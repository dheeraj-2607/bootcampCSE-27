#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int comparestr(char* str1,char* str2){	
	int len;
	if(strlen(str1)<strlen(str2)){
		 len = strlen(str2);
	}
	else if(strlen(str2)<strlen(str1)){
		 len = strlen(str1);
	}
	
	for(int i = 0;i<len;i++){
		if(str1[i] < str2[i]){
			return -1;
		}
		else if(str1[i] > str2[i]){
			return 1;
		}
	}
	return 0;
	/*else if(strlen(str1)<strlen(str2)) return -1;
	else if(strlen(str1)>strlen(str2)) return 1;*/
	

}
void main(int argc,char *argv[]){

	int result = comparestr(argv[1],argv[2]);
	printf("Result:%d\n", result);
}
