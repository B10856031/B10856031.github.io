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
	printf("�п�J�Ĥ@�ӼơG");
	scanf("%d",&a);
	printf("�п�J�ĤG�ӼơG");
	scanf("%d",&b);
	printf("\n��Ƭ۰��A�l�Ƭ��G%d",mod(a,b));
	printf("\n\n�Y�n�����п�J0�A�Y�Q�~��п�J���N�Ʀr�G");
	scanf("%d",&y);
	printf("------------------------------------------------------\n");
	}	
	return 0;
}
