#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	srand(time(NULL));
	int num[4],tempN[4],i,j,inputN[4],x,y[4]={1000,100,10,1},a,b,nReNum=10;
	printf("猜幾A幾B(無重複數字)\n電腦輸入的數字：");
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
		printf("\n請輸入一組1~9的四位數字：\n");
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
	printf("\n恭喜猜對!!");
	
	//下面是會有重復數字的幾A幾B
	//因為題目沒說要讓數字不重複
	//事實上也有重複數字的猜數字遊戲XD
	//ps:一開始做好之後才突然想到：平常玩的猜數字是不能有重複數字的。。。 
	//所以這個就附在註解裡了~ ~ 
	
	/*
	srand(time(NULL));
	int num[4],tempN[4],i,j,inputN[4],x,y[4]={1000,100,10,1},a,b,nReNum=10;
	printf("猜幾A幾B(有重複數字)\n電腦輸入的數字：");
	for(i=0;i<4;i++){
		num[i]=(rand()%9)+1;
		tempN[i]=num[i];//tempN用來儲存num(電腦產生的數字) 
		printf("%d",num[i]);
	}
	
	while(a!=4){
		printf("\n請輸入一組1~9的四位數字：\n");
		scanf("%d",&x);
		b=0,a=0;
		for(i=0;i<4;i++){
			num[i]=tempN[i];//讓 num (電腦產生的數字) 變為原來的值 (tempN)。(後面會讓num的值改變) 
		}
		for(i=0;i<4;i++){//使用者猜對前會一直讓使用者猜 
			if(i==0){
				inputN[i]=x/y[i];
			}else{
				inputN[i]=x/y[i]-x/y[i-1]*10;
			}
			if(num[i]==inputN[i]){
				a++;
			}
		}
		for(i=0;i<4;i++){//這個迴圈執行完後，只要有相同的數字就都是b，且一定是兩兩相同 {找出相同數字後，不會再讓那兩個相同數字下去比對}(利用num[i]=nReNum++;putNum[j]=nReNum++;)
			for(j=0;j<4;j++){
				if(num[i]==inputN[j]){
					num[i]=nReNum++;// nReNum會一直+1(可以讓num和putNum=不重複且>10的數字)(在開頭有設定讓nReNum=10) 
					inputN[j]=nReNum++;
					b++;
				}
			}
		}
		b=b-a;
		printf("%dA%dB",a,b);
		printf("\n-------------------------");
	}
	printf("\n恭喜猜對!!");*/ 
	return 0;
}
