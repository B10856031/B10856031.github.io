#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int inputNum,i,x,y=0;
	printf("�п�J�@���\n\n");
	scanf("%d",&inputNum);
	printf("\n2��%d�����Ҧ�����ơG",inputNum);
	
	for(i=2;i<=inputNum;i++){
		
		for(x=2;x<i;x++){
			if(i%x==0){
				y=1;
			}
		}
		
	if(y==0){
	printf("%d ",i);
	}
	y=0;
	}
	
	return 0;
}
