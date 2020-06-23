#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int inputNum,x;
	printf("輸入每月用電量\n\n");
	scanf("%d",&inputNum);
	if(inputNum<=20){
		x=inputNum*10;
	}
	else if(inputNum>=21&&inputNum<=60){
		x=inputNum*12;
	}
	else if(inputNum>=61&&inputNum<=80){
		x=inputNum*18;
	}
	else{
		x=inputNum*22;
	}
	printf("\n本月電費共%d元",x);
	return 0;
}
