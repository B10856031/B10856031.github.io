#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void addTen(int *valueOne,int *valueTwo){
	int temp=*valueOne;
	*valueOne=*valueTwo+10; 
	*valueTwo=temp+10;
}
int main(int argc, char *argv[]) {
	int a=100,b=10;
	printf("©I¥s«e¡Ga=%d,b=%d",a,b);
	addTen(&a,&b);
	printf("\n©I¥s«á¡Ga=%d ,b=%d",a,b);
	return 0;
}
