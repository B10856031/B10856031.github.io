#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	 srand(time(NULL));
	int i=0,j=0,inputNum,sequence[51]/*(排序、排名)*/,avg[51];
	
	struct data1{
		int num;
		char name[2500];
	};
	
	struct data2{
		int en;
		int ch;
		int ma;
	};

	struct data{
		struct data1 data[51];
		struct data2 score[50];
	}s1;
	
	while(i<50){
		s1.data[i].name[0]=(rand()%26)+65;
		while(j<7){
			s1.data[i].name[++j]=(rand()%26)+97;
		}
		j=0;
		s1.score[i].en=(rand()%100)+1;
		s1.score[i].ch=(rand()%100)+1;
		s1.score[i].ma=(rand()%100)+1;
		avg[i]=(s1.score[i].en+s1.score[i].ch+s1.score[i].ma)/3;
		s1.data[i].num=i+1;
		printf("姓名：%s 學號：%d 平均成績：%d\n",s1.data[i].name,s1.data[i].num,avg[i]);
		i++;
	}
	//排序 
	for(i=0;i<50;i++){
		for(j=0;j<50-i;j++){
			if(avg[j]<avg[j+1]){
				avg[50]=avg[j];
				avg[j]=avg[j+1];
				avg[j+1]=avg[50];
				sequence[50]=sequence[j];
				sequence[j]=sequence[j+1];
				sequence[j+1]=sequence[50];
				/*s1.data[50]=s1.data[j];
				s1.data[j]=s1.data[j+1];
				s1.data[j+1]=s1.data[50];*/
			}
		}
	}

	printf("-------------------------------------\n依據平均成績由大至小排列後：\n\n");
	int a;
	for(i=0;i<50;i++){//排列
		a=sequence[i];
		printf("姓名：%s 學號：%d 平均成績：%d\n",s1.data[a].name,s1.data[a].num,avg[a]);
	}
	
	printf("\n請輸入一整數：");
	scanf("%d",&inputNum);
	for(i=0;i<50;i++){
		if(avg[i]==avg[inputNum-1]){
			printf("姓名：%s 平均成績：%d\n",s1.data[i].name,avg[i]);
		}
	}/*
	//二元搜尋法 
	int mid,min,max;
	while(min<=max){
		mid=(min+max)/2;
		if(n[mid]==inputNum){
			break;
		}
		if(n[mid]<inputNum){
			min=mid+1;
		}else if(n[mid]>inputNum){
			max=mid-1;
		}
	}
	*/
	return 0;
}
