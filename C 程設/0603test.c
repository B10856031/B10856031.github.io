#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int num=10,*ptr=&num;
	printf("num(num��������)�G%d�A&num(num����})�G%p",num,&num);
	printf("\n*ptr(num��}����)�G%d�A ptr(num����})�G%p�A&ptr(ptr����})�G%p",*ptr,ptr,&ptr);
	
	int a=100,b=10;
	printf("�I�s�ea,b�G%d,%d",a,b);
	addTen(&a,&b); 
	printf("\n�I�s��a,b�G%d,%d",a,b);
	return 0;
}

int addTen(int *valueOne,int *valueTwo){
	int temp=*valueOne+10;
	*valueOne=*valueTwo+10;
	*valueTwo=temp;
}

