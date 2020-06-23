#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int num=10,*ptr=&num;
	printf("num(num本身的值)：%d，&num(num的位址)：%p",num,&num);
	printf("\n*ptr(num位址的值)：%d， ptr(num的位址)：%p，&ptr(ptr的位址)：%p",*ptr,ptr,&ptr);
	
	int a=100,b=10;
	printf("呼叫前a,b：%d,%d",a,b);
	addTen(&a,&b); 
	printf("\n呼叫後a,b：%d,%d",a,b);
	return 0;
}

int addTen(int *valueOne,int *valueTwo){
	int temp=*valueOne+10;
	*valueOne=*valueTwo+10;
	*valueTwo=temp;
}

