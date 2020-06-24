#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,a,b,x,y,inputN,tempN,count=0;
	while(count<=3){
		count=0;
		printf("請輸入一串>999的整數：");
		scanf("%d",&inputN);
		tempN=inputN;
		
		while(tempN!=0){
			tempN/=10;
			count++;
		}
	}
	int num[count];
	int tempCount=count;
	for(i=0;i<count;i++){
		a=pow(10,tempCount);
		b=a/10;
		if(i==0){
			num[i]=inputN/b;
		}else{
			num[i]=inputN/b-inputN/a*10;
		}
		tempCount--;
		if(i==1){
			x=num[i];
		}else if(i==count-2){
			y=num[i];
		}
	}
	printf("%d X %d = %d",x,y,x*y);

	return 0;
}


