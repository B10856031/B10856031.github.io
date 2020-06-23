#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	srand(time(NULL));
	int num[2][3],a,b,x,y,minNum=100;
	
	for(a=0;a<=1;a++){
		for(b=0;b<=2;b++){
			num[a][b]=(rand()%90)+10;
			printf("%d ",num[a][b]);
			if(num[a][b]<minNum){
				minNum=num[a][b];
				x=a+1;
				y=b+1;
			}
		}
		printf("\n");
	}
	printf("最小值為：%d\n最小值座標：(%d,%d)",minNum,x,y);
	return 0;
}
