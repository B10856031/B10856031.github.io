#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
float height1,height2,weight1,weight2;
char name1[99],name2[99];


		
printf("�вĤ@��ϥΪ̿�J�m�W\n");
scanf("%s",&name1);

printf("�п�J����\n");
scanf("%f",&height1);

printf("�п�J�魫\n");
scanf("%f",&weight1);

printf("�вĤG��ϥΪ̿�J�m�W\n");
scanf("%s",&name2);

printf("�п�J����\n");
scanf("%f",&height2);

printf("�п�J�魫\n");
scanf("%f",&weight2);
	
printf("%s�M%s��\n��������:%3.2f\n�����魫:%3.2f",name1,name2,(height1+height2)/2,(weight1+weight2)/2);

	return 0;
}
