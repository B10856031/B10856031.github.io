#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char n;
	printf("��J�@�Ӧr���G");
	scanf("%c", &n);
	if(n>=65&&n<=90){
		printf("�j�g�r��");
	}else if(n>=97&&n<=122){
		printf("�p�g�r��");
	}else if(n>=48&&n<=57){
		printf("�p�g�r��??(�Ʀr)");
	}
	return 0;
}
