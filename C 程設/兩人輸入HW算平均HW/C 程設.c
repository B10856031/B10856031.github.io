#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
float height1,height2,weight1,weight2;
char name1[99],name2[99];


		
printf("請第一位使用者輸入姓名\n");
scanf("%s",&name1);

printf("請輸入身高\n");
scanf("%f",&height1);

printf("請輸入體重\n");
scanf("%f",&weight1);

printf("請第二位使用者輸入姓名\n");
scanf("%s",&name2);

printf("請輸入身高\n");
scanf("%f",&height2);

printf("請輸入體重\n");
scanf("%f",&weight2);
	
printf("%s和%s的\n平均身高:%3.2f\n平均體重:%3.2f",name1,name2,(height1+height2)/2,(weight1+weight2)/2);

	return 0;
}
