#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int array[50];//array�}�C,�}�C�c�l�ƶq 
	int i,j,avg[50];
	srand(time(NULL));
	struct data1{
		int num[50];
		char name[51][8];
	};
	
	struct data2{
		int ch[50];//��� 
		int en[50];//�^�� 
		int ma[50];//�ƾ� 
	};
	
	struct data3{
		struct data1 inf ;
		struct data2 ach ;
	}a1;
	
	for(i=0;i<50;i++){
		array[i]=i;//�b�c�l�̵�����0~49 
		a1.inf.num[i]=i+1;
		a1.ach.ch[i]=(rand()%100)+1;
		a1.ach.en[i]=(rand()%100)+1;
		a1.ach.ma[i]=(rand()%100)+1;
		avg[i]=(a1.ach.en[i]+a1.ach.ch[i]+a1.ach.ma[i])/3;
		printf("�Ǹ�:%d,�W�r:",a1.inf.num[i]);
		for(j=0;j<8;j++){
			a1.inf.name[i][j]=(rand()%26)+97;
			printf("%c",a1.inf.name[i][j]);
		}
		printf("��妨�Z:%d  �^�妨�Z:%d  �ƾǦ��Z:%d  �������Z:%d\n",a1.ach.ch[i],a1.ach.en[i],a1.ach.ma[i],avg[i]);
	}
	printf("---------------------------------------------------------\n");
	
	int temp;
	for(i=0; i<50; i++){
        for(j=0; j<49-i; j++){//�]���|�V��V�֡A�ҥHj<49-i// 
            if(avg[j]<avg[j+1]){//�~�hi�����`���ơA���hj�O���檺����// 

                temp = avg[j];//�������Z���� 
                avg[j] = avg[j+1];
                avg[j+1] = temp;
                
                temp = array[j];//���ޭȤ��� 
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
    }
    int rank[50];
    rank[0]=1;
    for(i=0;i<50;i++){
    	
    	if(avg[i]==avg[i-1]){//�P�_�ƦW�A��e�@�Ӫ��������Z�@��<�ƦW�N�令�e�@�� 
    		rank[i]=rank[i-1];
    	}else if(avg[i]!=avg[i-1]){
    		rank[i]=i+1;
		}
		
    	printf("�Ǹ�:%d,�W�r:",a1.inf.num[array[i]]);
		for(j=0;j<8;j++){
			printf("%c",a1.inf.name[array[i]][j]);
		}
    	printf("��妨�Z:%d  �^�妨�Z:%d  �ƾǦ��Z:%d  �������Z:%d  �ƦW:%d\n",a1.ach.ch[array[i]],a1.ach.en[array[i]],a1.ach.ma[array[i]],avg[i],rank[i]);
	    
	}
	int my;
	printf("�п�J�A�Q�n�䪺�Ʀr:");
	scanf("%d",&my);
	
	int stop=1;
	while(stop==1){//�̭��j�餣�_���ư���A����stop!=1�N��S���ۦP���������Z 
		int low = 0; 
    	int upper = 49; //49�O���ޭ�(����)
    	while(low <= upper) { 
       		int mid = (low+upper)/2; 
			if(avg[mid]==my){
				printf("�Ǹ�:%d  �W�r:",a1.inf.num[array[mid]]);//array[�ܼ�]�O���c�����ޭȡA�o�̪��ܼƬOmid 
				for(j=0;j<8;j++){
					printf("%c",a1.inf.name[array[mid]][j]);
				}
				printf("  rank:%d\n",rank[mid]);
				avg[mid]=0;//���A�w�g��쪺�������Z�k�s�A����N���|���Ƨ��L
				for(i=0;i<50;i++){//�Ƨ� 
					for(j=0;j<50-i;j++){
						if(avg[j]<avg[j+1]){
							temp = avg[j];//�������Z���� 
               				avg[j] = avg[j+1];
                			avg[j+1] = temp;
                			temp = array[j];//���ޭȤ��� 
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
				printf("�Ǹ�:%d  �W�r:",a1.inf.num[array[mid]]);//array[�ܼ�]�O���c�����ޭȡA�o�̪��ܼƬOmid 
				for(j=0;j<8;j++){
					printf("%c",a1.inf.name[array[mid]][j]);
				}
				printf("  rank:%d\n",rank[mid]);
				avg[mid]=0;//���A�w�g��쪺�������Z�k�s�A����N���|���Ƨ��L
				for(i=0;i<50;i++){//�Ƨ� 
					for(j=0;j<50-i;j++){
						if(avg[j]<avg[j+1]){
							temp = avg[j];//�������Z���� 
               				avg[j] = avg[j+1];
                			avg[j+1] = temp;
                			temp = array[j];//���ޭȤ��� 
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
