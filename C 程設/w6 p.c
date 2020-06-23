#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a,b,y=1;

	 int mod(int x, int y){
	 	int ans,i;
	 	if(x<y){
	 		i=x;
	 		x=y;
	 		y=i;
		 }
	 	ans=x % y;
	 	return ans;
	 }
	 
	while(y!=0){
	printf("請輸入第一個數：");
	scanf("%d",&a);
	printf("請輸入第二個數：");
	scanf("%d",&b);
	printf("\n兩數相除，餘數為：%d",mod(a,b));
	printf("\n\n若要結束請輸入0，若想繼續請輸入任意數字：");
	scanf("%d",&y);
	printf("------------------------------------------------------\n");
	}	
	return 0;
}
