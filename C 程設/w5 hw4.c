#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x=0,ten,five,one;
	float num;
	printf("請輸入要提領金額： ");
	scanf("%f",&num);
	
	//判斷是否為小數 
	while(num - (int)num != 0){
            printf("\n請重新輸入： ");
            scanf("%f",&num);
	}
	

	ten=(int)num/10; 
	five=((int)num-ten*10)/5; 
	one=num-ten*10-five*5;
	
	printf("\n%d個10元\n%d個5元\n%d個1元",ten,five,one);
	return 0;
}
