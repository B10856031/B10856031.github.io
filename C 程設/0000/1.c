#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num1,num2,lcd,gcd,i=1,max;
	printf("請輸入第一個數\n");
	scanf("%d",&num1);
	printf("請輸入第二個數\n");
	scanf("%d",&num2);

	while(i<=num1){
		if(num1%i==0&&num2%i==0){
			gcd=i;//gcd=最大公因數 
		}
		i++;
	}
	printf("\n%d %d",num1/gcd,num2/gcd);
	return 0;
}
