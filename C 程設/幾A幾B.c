#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	srand(time(NULL));
	int num[4],tempN[4],i,j,inputN[4],x,y[4]={1000,100,10,1},a,b,nReNum=10;
	printf("�q�XA�XB(�L���ƼƦr)\n�q����J���Ʀr�G");
	for(i=0;i<4;i++){
		num[i]=(rand()%9)+1;
		for(j=0;j<i;j++){
			if(num[i]==num[j]){
				i--;
				break;
			}
		}
	}
	for(i=0;i<4;i++){
		tempN[i]=num[i];
		printf("%d",num[i]);
	}
	while(a!=4){
		printf("\n�п�J�@��1~9���|��Ʀr�G\n");
		scanf("%d",&x);
		b=0,a=0;
		for(i=0;i<4;i++){
			num[i]=tempN[i];
		}
		for(i=0;i<4;i++){
			if(i==0){
				inputN[i]=x/y[i];
			}else{
				inputN[i]=x/y[i]-x/y[i-1]*10;
			}
			if(num[i]==inputN[i]){
				a++;
			}
		}
		for(i=0;i<4;i++){
			for(j=0;j<4;j++){
				if(num[i]==inputN[j]){
					num[i]=nReNum++;
					inputN[j]=nReNum++;
					b++;
				}
			}
		}
		b=b-a; 
		printf("%dA%dB",a,b);
		printf("\n-------------------------");
	}
	printf("\n���߲q��!!");
	
	//�U���O�|�����_�Ʀr���XA�XB
	//�]���D�بS���n���Ʀr������
	//�ƹ�W�]�����ƼƦr���q�Ʀr�C��XD
	//ps:�@�}�l���n����~��M�Q��G���`�����q�Ʀr�O���঳���ƼƦr���C�C�C 
	//�ҥH�o�ӴN���b���Ѹ̤F~ ~ 
	
	/*
	srand(time(NULL));
	int num[4],tempN[4],i,j,inputN[4],x,y[4]={1000,100,10,1},a,b,nReNum=10;
	printf("�q�XA�XB(�����ƼƦr)\n�q����J���Ʀr�G");
	for(i=0;i<4;i++){
		num[i]=(rand()%9)+1;
		tempN[i]=num[i];//tempN�Ψ��x�snum(�q�����ͪ��Ʀr) 
		printf("%d",num[i]);
	}
	
	while(a!=4){
		printf("\n�п�J�@��1~9���|��Ʀr�G\n");
		scanf("%d",&x);
		b=0,a=0;
		for(i=0;i<4;i++){
			num[i]=tempN[i];//�� num (�q�����ͪ��Ʀr) �ܬ���Ӫ��� (tempN)�C(�᭱�|��num���ȧ���) 
		}
		for(i=0;i<4;i++){//�ϥΪ̲q��e�|�@�����ϥΪ̲q 
			if(i==0){
				inputN[i]=x/y[i];
			}else{
				inputN[i]=x/y[i]-x/y[i-1]*10;
			}
			if(num[i]==inputN[i]){
				a++;
			}
		}
		for(i=0;i<4;i++){//�o�Ӱj����槹��A�u�n���ۦP���Ʀr�N���Ob�A�B�@�w�O���ۦP {��X�ۦP�Ʀr��A���|�A������ӬۦP�Ʀr�U�h���}(�Q��num[i]=nReNum++;putNum[j]=nReNum++;)
			for(j=0;j<4;j++){
				if(num[i]==inputN[j]){
					num[i]=nReNum++;// nReNum�|�@��+1(�i�H��num�MputNum=�����ƥB>10���Ʀr)(�b�}�Y���]�w��nReNum=10) 
					inputN[j]=nReNum++;
					b++;
				}
			}
		}
		b=b-a;
		printf("%dA%dB",a,b);
		printf("\n-------------------------");
	}
	printf("\n���߲q��!!");*/ 
	return 0;
}
