#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
 
int main(int argc, char *argv[]) {
	int n;
 	char i[2];
	printf("請輸入一整數：");
 	scanf("%d",&n);
 	printf("\n請輸入一字元：");
 	scanf("%s",i);
 	printf("\n");
 	draw(n,i);
	return 0;
}

int draw(int n,char i[]){
	int x,y,z;
	for(x=1;x<n+1;x++){
  		for(y=1;y<=n-x;y++){ 
  			printf(" ");
  		} 
  		for(z=1;z<=x;z++){
   			printf("%s",i);
  		}
  		for(z=x-1;z>=1;z--){
   			printf("%s",i);
  		}
  		printf("\n");
	}
}
