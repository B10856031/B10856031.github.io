#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int SQRT(int a ){
	
 int i,e;
 
 for(i=1;i*i<=a;i++) {
  e=i;
 }
 
 if(i*i-a>a-e*e){
 return e;
 }
 else{
 return i;
}

}

int main(int argc, char *argv[]) {
 int inputNum;
 printf("�п�J�Ʀr�G");
 scanf("%d",&inputNum);
 printf("�̱��񪺭Ȭ��G%d",SQRT(inputNum));
 return 0;
}


