#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	struct data1{
		int num[50];
		char name[51][8];
	};
	
	struct data2{
		int math[50];
		int chin[50];
		int engl[50];
		int ave[50]	
	};
	
	struct data{
		struct data1 person;
		struct data2 gra;
	}data;
	
	
	int b[3] , i , j  , tmp , k , in , rank[51];
	float  avg[50];
	int a;
	srand(time(NULL));
	
	for ( i = 1 ; i<=50 ; i++ ){
		
		data.person.num[i] = i ;
		printf("�Ǹ����G%d,�m�W���G",data.person.num[i]);
		
		b[1] = (rand()%100)+1;
		b[2] = (rand()%100)+1;
		b[3] = (rand()%100)+1;
		
		data.gra.math[i] = b[1];
		data.gra.chin[i] = b[2];
		data.gra.engl[i] = b[3];
		
		data.gra.ave[i] = (data.gra.math[i] + data.gra.chin[i] + data.gra.engl[i]) / 3 ;
		avg[i] = (data.gra.math[i] + data.gra.chin[i] + data.gra.engl[i]) / 3 ;
		
		for ( j = 1 ; j <=8 ; j++ ){
			
		a = (rand()%26)+97;
		data.person.name[i][j] = a ;
		printf("%c",data.person.name[i][j]); 
		
		
		
	}
	printf(",�������Z���G%3.0f",avg[i]);
	printf("\n");
}
	printf("-------------------------------------------------------");
	printf("\n");
	
	for ( i = 1; i <=50 ; i++){
		rank[i] = 1;
		for (j = 50 ; j >= 1  ; j--){
				if ( avg[i] < avg[j] ){
			
				rank[i] += 1;
			}
				else if ( avg[i] == avg[j]){
					if (data.gra.math[i] < data.gra.math[j]){
						rank[i] += 1;
					}
					else if (data.gra.math[i] == data.gra.math[j] && data.gra.chin[i] < data.gra.chin[j]){
						rank[i] += 1;
					}
					else if (data.gra.math[i] == data.gra.math[j] && data.gra.chin[i] < data.gra.chin[j] && data.gra.engl[i] < data.gra.engl[j]){
						rank[i] += 1;
					}
				}
				
				
			}
			
		}
	
	
	
	
	for (i = 1 ; i<=50 ; i++){
		for (j=1 ; j<=50 ; j++){
		
		if (rank[j] == i){
		
		printf("��%d�W,�Ǹ����G%d,�m�W���G",rank[j],data.person.num[j]);
		
		for (k=1 ; k<=8 ; k++){
		printf("%c",data.person.name[j][k]);
		
	}
	printf(",�������Z���G%3.0f\n",avg[j]);
}
	}	
	}

		printf("-------------------------------------------------------");
		
	
		
	printf("\n");
	
	
	printf("�п�J�@�Ӿ��\n");
	scanf("%d",&in);
		

	for ( i = 50; i >0 ; i--){
		for (j = 1 ; j < i  ; j++){
			if ( avg[j] > avg[j+1] ){
				
				tmp = avg[j];
				avg[j] = avg[j+1];
				avg[j+1] = tmp;
			}
		}
	}

        	for (i=1;i<=50;i++){
            	if (in == data.gra.ave[i]){
            		printf("�ǥͩm�W���G");
            		for (k = 1 ; k <=8 ; k++){
            			printf("%c",data.person.name[i][k]);
					}
					printf(",�W����%d\n",rank[i]);
					
			}
		}
		

system("pause");
 	
	
	return 0;
}
