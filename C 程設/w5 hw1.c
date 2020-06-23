#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int inputNum,i,x,y=0;
	printf("請輸入一整數\n\n");
	scanf("%d",&inputNum);
	printf("\n2到%d之間所有的質數：",inputNum);
	
	for(i=2;i<=inputNum;i++){
		
		for(x=2;x<i;x++){
			if(i%x!=0){
				printf("%d ",i);
				break;
			}
		}  /* 
		if(y==0){
		printf("%d ",i);
		}
	
		=0;*/
	 
	}
	
	return 0;
}
