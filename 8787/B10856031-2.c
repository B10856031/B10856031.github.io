#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int inputN[5],i,j;
	printf("請輸入5個數字：\n");
	for(i=0;i<5;i++){
		scanf("%d",&inputN[i]);
	}
	for(i=0;i<5;i++){
		for(j=0;j<4-i;j++){
			if(inputN[j]>inputN[j+1]){
				int temp=inputN[j];
				inputN[j]=inputN[j+1];
				inputN[j+1]=temp;
			}
		}
	}
	printf("排序後：");
	for(i=0;i<5;i++){
		printf("%d ",inputN[i]);
	}
	return 0;
}
