#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char inputN[20];
	printf("請輸入小於20字的字串：");
	scanf("%s",inputN);
	length(inputN);
	length2(inputN);
	return 0;
}
int length(char str[]){
	int x,times=0;
	for(x=0;x<=19;x++){
		if(str[x]=='\0' && str[x]!=' '){
			break;
		}else{
			times++;
		}
	}
	printf("(by for  )字串長度為：%d",times);
}
int length2(char str[]){
	int x=0,times=0;
	while(x<=19){
		if(str[x]!='\0'&&str[x]!=' '){
			times++;
		}else{
			break;
		}
		x++;
	}
	printf("\n(by while)字串長度為：%d",times);
}
