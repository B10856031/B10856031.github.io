#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int array[50];//array陣列,陣列箱子數量 
	int i,j,avg[50];
	srand(time(NULL));
	struct data1{
		int num[50];
		char name[51][8];
	};
	
	struct data2{
		int ch[50];//國文 
		int en[50];//英文 
		int ma[50];//數學 
	};
	
	struct data3{
		struct data1 inf ;
		struct data2 ach ;
	}a1;
	
	for(i=0;i<50;i++){
		array[i]=i;//在箱子裡給予值0~49 
		a1.inf.num[i]=i+1;
		a1.ach.ch[i]=(rand()%100)+1;
		a1.ach.en[i]=(rand()%100)+1;
		a1.ach.ma[i]=(rand()%100)+1;
		avg[i]=(a1.ach.en[i]+a1.ach.ch[i]+a1.ach.ma[i])/3;
		printf("學號:%d,名字:",a1.inf.num[i]);
		for(j=0;j<8;j++){
			a1.inf.name[i][j]=(rand()%26)+97;
			printf("%c",a1.inf.name[i][j]);
		}
		printf("國文成績:%d  英文成績:%d  數學成績:%d  平均成績:%d\n",a1.ach.ch[i],a1.ach.en[i],a1.ach.ma[i],avg[i]);
	}
	printf("---------------------------------------------------------\n");
	
	int temp;
	for(i=0; i<50; i++){
        for(j=0; j<49-i; j++){//因為會越比越少，所以j<49-i// 
            if(avg[j]<avg[j+1]){//外層i執行總次數，內層j是執行的長度// 

                temp = avg[j];//平均成績互換 
                avg[j] = avg[j+1];
                avg[j+1] = temp;
                
                temp = array[j];//索引值互換 
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
    }
    int rank[50];
    rank[0]=1;
    for(i=0;i<50;i++){
    	
    	if(avg[i]==avg[i-1]){//判斷排名，跟前一個的平均成績一樣<排名就改成前一個 
    		rank[i]=rank[i-1];
    	}else if(avg[i]!=avg[i-1]){
    		rank[i]=i+1;
		}
		
    	printf("學號:%d,名字:",a1.inf.num[array[i]]);
		for(j=0;j<8;j++){
			printf("%c",a1.inf.name[array[i]][j]);
		}
    	printf("國文成績:%d  英文成績:%d  數學成績:%d  平均成績:%d  排名:%d\n",a1.ach.ch[array[i]],a1.ach.en[array[i]],a1.ach.ma[array[i]],avg[i],rank[i]);
	    
	}
	int my;
	printf("請輸入你想要找的數字:");
	scanf("%d",&my);
	
	int stop=1;
	while(stop==1){//裡面迴圈不斷重複執行，直到stop!=1代表沒有相同的平均成績 
		int low = 0; 
    	int upper = 49; //49是索引值(結尾)
    	while(low <= upper) { 
       		int mid = (low+upper)/2; 
			if(avg[mid]==my){
				printf("學號:%d  名字:",a1.inf.num[array[mid]]);//array[變數]是結構的索引值，這裡的變數是mid 
				for(j=0;j<8;j++){
					printf("%c",a1.inf.name[array[mid]][j]);
				}
				printf("  rank:%d\n",rank[mid]);
				avg[mid]=0;//讓你已經找到的平均成績歸零，之後就不會重複找到他
				for(i=0;i<50;i++){//排序 
					for(j=0;j<50-i;j++){
						if(avg[j]<avg[j+1]){
							temp = avg[j];//平均成績互換 
               				avg[j] = avg[j+1];
                			avg[j+1] = temp;
                			temp = array[j];//索引值互換 
                			array[j]=array[j+1];
                			array[j+1]=temp;
                			temp=rank[j+1];
                			rank[j+1]=rank[j];
                			rank[j]=temp;
						}	
					}
				}
				break;
			}
			else if(avg[mid]>my){
				low=mid+1;
			}
			else if(avg[mid]<my){
				upper=mid-1;
			}
    	}
    	if(low>upper){
			stop=0;
		}
	}
    	/*
    int stop=0;
	while(stop==0){
		int min=0,max=49;
		while(min<=max){
			int mid=(min+max)/2;
			if(avg[mid]==inputNum){
				printf("學號:%d  名字:",a1.inf.num[array[mid]]);//array[變數]是結構的索引值，這裡的變數是mid 
				for(j=0;j<8;j++){
					printf("%c",a1.inf.name[array[mid]][j]);
				}
				printf("  rank:%d\n",rank[mid]);
				avg[mid]=0;//讓你已經找到的平均成績歸零，之後就不會重複找到他
				for(i=0;i<50;i++){//排序 
					for(j=0;j<50-i;j++){
						if(avg[j]<avg[j+1]){
							temp = avg[j];//平均成績互換 
               				avg[j] = avg[j+1];
                			avg[j+1] = temp;
                			temp = array[j];//索引值互換 
                			array[j]=array[j+1];
                			array[j+1]=temp;
                			temp=rank[j+1];
                			rank[j+1]=rank[j];
                			rank[j]=temp;
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
    	*/
	
	

	

	return 0;
}
