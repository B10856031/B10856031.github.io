#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	srand(time(NULL));
	int i,j,avg[150],inputN=1,a[150];
	struct data{
		int num;
		int en;
		int ch;
	}data[150];
	for(i=0;i<150;i++){
		a[i]=i;
		data[i].num=i+1;
		data[i].en=(rand()%11)+90;
		data[i].ch=(rand()%11)+90;
		avg[i]=(data[i].en+data[i].ch)/2;
		printf("�Ǹ��G%d �^��G%d ���G%d �����G%d\n",data[i].num,data[i].en,data[i].ch,avg[i]);
	}
	printf("\n�Ƨǫ�G\n\n");
	for(i=0;i<150;i++){
		for(j=0;j<149-i;j++){
			if(avg[j]<avg[j+1]){
				change(avg,j);
				change(a,j);
			}
			if(avg[j]==avg[j+1]){
				if(data[a[j]].ch<data[a[j+1]].ch){
					change(avg,j);
					change(a,j);
				}
			}
		}
	}
	for(i=0;i<150;i++){
		printf("�Ǹ��G%d �^��G%d ���G%d �����G%d\n",data[a[i]].num,data[a[i]].en,data[a[i]].ch,avg[i]);
	}
	while(inputN!=0){
		printf("�п�J�Q�d�ߤ���������(�|��X���󦹥����Ȫ���ơA��J0����)�G");
		scanf("%d",&inputN);
		if(inputN==0){
			break;
		}
		for(i=0;i<150;i++){
			if(avg[i]>=inputN){
				printf("�Ǹ��G%d �^��G%d ���G%d �����G%d\n",data[a[i]].num,data[a[i]].en,data[a[i]].ch,avg[i]);
			}
		}
	}

	return 0;
}

int change(int n[],int i){
	int temp=n[i];
	n[i]=n[i+1];
	n[i+1]=temp;
}
