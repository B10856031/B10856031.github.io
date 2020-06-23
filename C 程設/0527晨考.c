#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	 srand(time(NULL));
	int i=0,j=0,inputNum,sequence[50]/*(排序，用來當索引值)*/,avg[50],rank[50];
	
	struct data1{
		int num;
		char name[2425];
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
		sequence[i]=i;
		if(i<9){
			printf("姓名：%s 學號： %d 平均成績：%d\n",s1.data[i].name,s1.data[i].num,avg[i]);
		}else{
			printf("姓名：%s 學號：%d 平均成績：%d\n",s1.data[i].name,s1.data[i].num,avg[i]);
		}
		i++;
	}
	
	//排序 
	for(i=0;i<50;i++){
		for(j=0;j<50-i;j++){
			if(avg[j]<avg[j+1]){
				exchange(avg,j);
				exchange(sequence,j);
			}
		}
	}

	printf("-------------------------------------\n依據平均成績由大至小排列後：\n\n");
	rank[0]=1;
	for(i=0;i<50;i++){//排列
	
		//rank照一般排名次排法 
		if(avg[i]==avg[i-1]){
			rank[i]=rank[i-1];
		}else if(avg[i]!=avg[i-1]){
			rank[i]=i+1;
		}
		
		if(s1.data[sequence[i]].num<10){
			printf("姓名：%s 學號： %d 平均成績：%d\n",s1.data[sequence[i]].name,s1.data[sequence[i]].num,avg[i]);
		}else{
			printf("姓名：%s 學號：%d 平均成績：%d\n",s1.data[sequence[i]].name,s1.data[sequence[i]].num,avg[i]);
		}	
	}
	
	printf("\n請輸入一整數：");
	scanf("%d",&inputNum);
	
	//二元搜尋法 
	int stop;
	while(stop==0){
		int mid,min=0,max=49;
		while(min<=max){
			mid=(min+max)/2;
			if(avg[mid]==inputNum){
				printf("\n姓名：%s 名次：%d",s1.data[sequence[mid]].name,rank[mid]);
				avg[mid]=0;//讓已找出資料的avg歸0，再從重新排序 
				for(i=0;i<50;i++){//排序 
					for(j=0;j<50-i;j++){
						if(avg[j]<avg[j+1]){
							exchange(avg,j);
							exchange(rank,j);
							exchange(sequence,j);
						}	
					}
				}
				break;
			}
			else if(avg[mid]>inputNum){
				min=mid+1;
			}
			else if(avg[mid]<inputNum){
				max=mid-1;
			}
		}
		if(min>max){
			stop=1;
		}
	}
	return 0;
}
int exchange(int n[],int j){
	int temp;
	temp=n[j];
	n[j]=n[j+1];
	n[j+1]=temp;
}
