#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num;
	printf("3+6+9+...+3n=?\n�п�J�@���(n)�G");
	scanf("%d",&num);
	printf("\nAns�G%d",f(num));
	return 0;
}
int f(int n){
	
	if(n==1){
		return 3;
	}else{
		return 3*n+f(n-1);
	}
	
}
