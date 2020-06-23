#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	srand(time(NULL));
	int inputNum,i,j,k,n[1000],x,y,temp,times,mid,min=0,max=999;

	for(i=0;i<=999;i++){//不重複亂數 
		n[i]=(rand( ) % 10000) +1;
		for(j=0;j<i;j++){
			if(n[i]==n[j]){
				n[i]=(rand( ) % 10000) +1;
				j=0;
			}
		}

	}

	for(x=1;x<1000;x++){//由小排到大
		for(y=0;y<1000-x;y++){
			if(n[y]>n[y+1]){
				temp=n[y];
				n[y]=n[y+1];
				n[y+1]=temp;
			}
		}
	}

   for(i=0;i<1000;i++){//列出來 
   		printf("%d ",n[i]);
   }
    printf("\n\n");
	printf("請輸入一個數：");
	scanf("%d",&inputNum);
	while(min<=max){
		mid=(min+max)/2;
		times++;
		if(n[mid]==inputNum){
			printf("\n共比較%d次陣列內的數字，您輸入的數字存在",times);
			break;
		}
		if(n[mid]<inputNum){
			min=mid+1;
		}else if(n[mid]>inputNum){
			max=mid-1;
		}
	}
	if(min>max){
	printf("\n共比較%d次陣列內的數字，您輸入的數字不存在",times);
	}
	return 0;
}


