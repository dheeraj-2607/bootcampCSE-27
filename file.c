#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
void main(int argc, char *argv[]){
	FILE *fp1,*fp2;
	int newline=0,chara=0,nword=0;
	fp1 = fopen(argv[1], "r");
	fp2 = fopen(argv[2],"w");
	char ch;
	while((ch = fgetc(fp1))!= EOF){
		if(ch == '\n') newline++;
		else if (isalpha(ch)){
			chara++;
			while((ch = fgetc(fp1))!= EOF && ch != ' ' && ch !='\t' && ch !='\n'){
				if(isalpha(ch))chara++;
			}
			if(ch == '\n') newline++;
			nword++;
		}
	}
	fprintf( fp2,"line:%d\n",newline);
	fprintf( fp2,"character:%d\n",chara);
	fprintf( fp2,"words:%d\n",nword);
	fclose(fp1);
	fclose(fp2);
	return ;
}
