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
 printf("請輸入數字：");
 scanf("%d",&inputNum);
 printf("最接近的值為：%d",SQRT(inputNum));
 return 0;
}


