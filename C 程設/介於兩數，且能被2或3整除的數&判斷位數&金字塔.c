#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	/*int m,n,i;
	printf("��>n�B<m��Q2��3�㰣����ơ�\n");
	printf("�п�J2�Ӿ��\n\n");
	scanf("%d %d",&n,&m);
	printf("\n");
	printf("�j��%d�p��%d�A�B��Q2��3�㰣���Ʀ��G",n,m);
	for(i=n+1;i<m;i++){
		if(i%2==0||i%3==0){
			printf("%d ",i);	
		}
	}
	printf("\n\n------------------------------------------------------------------------------\n");
 *//* 
	int inputNum,x,y,z;
	printf("\n�п�J�@�Ӿ��\n\n");
	scanf("%d",&inputNum);
	printf("\n");
	for(x=1;x<inputNum+1;x++){
		for(y=1;y<=inputNum-x;y++){ 
		printf(" ");
		} 
		for(z=1;z<=x;z++){
			printf("%d",z);
		}
		for(z=x-1;z>=1;z--){
			printf("%d",z);
		}
		printf("\n");
	}*/ 
	  
	int inputN,a=0;
	printf("�п�J�@�Ӥ��h��5�쪺�����\n\n");
	scanf("%d",&inputN);
	printf("\n");
	while(inputN!=0){
		inputN/=10;
		a++;
	}
	printf("%d���",a); 
	return 0;
}
