#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char n;
	printf("輸入一個字元：");
	scanf("%c", &n);
	if(n>=65&&n<=90){
		printf("大寫字母");
	}else if(n>=97&&n<=122){
		printf("小寫字母");
	}else if(n>=48&&n<=57){
		printf("小寫字母??(數字)");
	}
	return 0;
}
