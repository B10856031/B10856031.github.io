#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	srand(time(NULL));
	int num[10],i,j;

	for(i=0;i<10;i++){
		num[i]=(rand()%99)+1;
		for(j=0;j<i;j++){
			if(num[i]==num[j]){
				i--;
				break;
			}
		}
	}
	printf("�H������1~99���L�����H���üơG");
	for(i=0;i<10;i++){
		printf("%d ",num[i]);
	}
	return 0;
}
