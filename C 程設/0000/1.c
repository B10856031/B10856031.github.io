#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num1,num2,lcd,gcd,i=1,max;
	printf("�п�J�Ĥ@�Ӽ�\n");
	scanf("%d",&num1);
	printf("�п�J�ĤG�Ӽ�\n");
	scanf("%d",&num2);

	while(i<=num1){
		if(num1%i==0&&num2%i==0){
			gcd=i;//gcd=�̤j���]�� 
		}
		i++;
	}
	printf("\n%d %d",num1/gcd,num2/gcd);
	return 0;
}
