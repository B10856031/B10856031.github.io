#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x=0,ten,five,one;
	float num;
	printf("�п�J�n������B�G ");
	scanf("%f",&num);
	
	//�P�_�O�_���p�� 
	while(num - (int)num != 0){
            printf("\n�Э��s��J�G ");
            scanf("%f",&num);
	}
	

	ten=(int)num/10; 
	five=((int)num-ten*10)/5; 
	one=num-ten*10-five*5;
	
	printf("\n%d��10��\n%d��5��\n%d��1��",ten,five,one);
	return 0;
}
