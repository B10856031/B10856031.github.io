#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,j,temp,num[5],sort[5];
	srand(time(NULL));
	for(i=0;i<5;i++){
		num[i]=(rand()%1000)+1;
		sort[i]=num[i];
	}
	for (i = 0; i < 5; i++) {
    	for (j = 0; j < i; j++) {
      		if (sort[j] < sort[i]) {
        	temp = sort[j];
       	 	sort[j] = sort[i];
       	 	sort[i] = temp;
      	}
    }
  }
  printf("%d,%d,%d,%d,%d\n由大排到小為：\n%d,%d,%d,%d,%d",num[0],num[1],num[2],num[3],num[4],sort[0],sort[1],sort[2],sort[3],sort[4]);
	return 0;
}
