#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int f(int n){
	
	if(n!=0){
		return (2*f(n-1)-5);
	}
	else{
		return 3;	
	}
}

int main(int argc, char *argv[]) {
	int inputNum;
	printf(" f(n)=2f(n-1)-5�Bf(0)=3 \n�п�J�@���(n)�G");
	scanf("%d",&inputNum);
	printf("f(%d)=%d",inputNum,f(inputNum));
	return 0;
}
