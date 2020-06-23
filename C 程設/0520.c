#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	srand(time(NULL));
	int i=0,j=0,inputNum;
	
	struct data{
		int num;
		char name[10000];
		int avg;
	}data[51];
	
	struct data2{
		int en;
		int ch;
		int ma;
	} score[50];

	while(i<50){
		while(j<=7){
			data[i].name[0]=(rand()%26)+65;
			data[i].name[j++]=(rand()%26)+97;
		}
		j=0;
		score[i].en=(rand()%100)+1;
		score[i].ch=(rand()%100)+1;
		score[i].ma=(rand()%100)+1;
		data[i].avg=(score[i].en+score[i].ch+score[i].ma)/3;
		data[i].num=i+1;
		printf("姓名：%s 學號：%d 平均成績：%d\n",data[i].name,data[i].num,data[i].avg);
		i++;
	}

	for(i=0;i<50;i++){//由大排到小 
		for(j=0;j<50-i;j++){
			if(data[j].avg<data[j+1].avg){
				data[50]=data[j];
				data[j]=data[j+1];
				data[j+1]=data[50];
			}
		}
	}


	printf("--------------------------------------------------------------------\n");
	for(i=0;i<50;i++){
		printf("姓名：%s 學號：%d 平均成績：%d\n",data[i].name,data[i].num,data[i].avg);
	}
	printf("\n請輸入想查詢的：");
	scanf("%d",&inputNum);
	for(i=0;i<50;i++){
		if(data[i].avg==data[inputNum-1].avg){
			printf("姓名：%s 平均成績：%d\n",data[i].name,data[i].avg);
		}
	}
	return 0;
}
