#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	/*int m,n,i;
	printf("＜>n且<m能被2或3整除的整數＞\n");
	printf("請輸入2個整數\n\n");
	scanf("%d %d",&n,&m);
	printf("\n");
	printf("大於%d小於%d，且能被2或3整除的數有：",n,m);
	for(i=n+1;i<m;i++){
		if(i%2==0||i%3==0){
			printf("%d ",i);	
		}
	}
	printf("\n\n------------------------------------------------------------------------------\n");
 *//* 
	int inputNum,x,y,z;
	printf("\n請輸入一個整數\n\n");
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
	printf("請輸入一個不多於5位的正整數\n\n");
	scanf("%d",&inputN);
	printf("\n");
	while(inputN!=0){
		inputN/=10;
		a++;
	}
	printf("%d位數",a); 
	return 0;
}
