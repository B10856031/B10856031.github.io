#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	srand(time(NULL));
	int inputNum,i,j,k,n[1000],x,y,temp,times,mid,min=0,max=999;

	for(i=0;i<=999;i++){//�����ƶü� 
		n[i]=(rand( ) % 10000) +1;
		for(j=0;j<i;j++){
			if(n[i]==n[j]){
				n[i]=(rand( ) % 10000) +1;
				j=0;
			}
		}

	}

	for(x=1;x<1000;x++){//�Ѥp�ƨ�j
		for(y=0;y<1000-x;y++){
			if(n[y]>n[y+1]){
				temp=n[y];
				n[y]=n[y+1];
				n[y+1]=temp;
			}
		}
	}

   for(i=0;i<1000;i++){//�C�X�� 
   		printf("%d ",n[i]);
   }
    printf("\n\n");
	printf("�п�J�@�ӼơG");
	scanf("%d",&inputNum);
	while(min<=max){
		mid=(min+max)/2;
		times++;
		if(n[mid]==inputNum){
			printf("\n�@���%d���}�C�����Ʀr�A�z��J���Ʀr�s�b",times);
			break;
		}
		if(n[mid]<inputNum){
			min=mid+1;
		}else if(n[mid]>inputNum){
			max=mid-1;
		}
	}
	if(min>max){
	printf("\n�@���%d���}�C�����Ʀr�A�z��J���Ʀr���s�b",times);
	}
	return 0;
}


