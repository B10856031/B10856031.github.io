#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n,x;
	printf("請輸入一整數：");
	scanf("%d",&n);
	printf("2~%d的質數有：",n);
	for(x=2;x<=n;x++){
		f(x);
		
	}
	return 0;
}

void f(int x){
	int y,a=0;
	for(y=2;y<x;y++){
			if(x%y==0){
				a=1;
				break;
			}
		} 
		if(a==0){
		printf("%d ",x);
		}
		a=0;
}
