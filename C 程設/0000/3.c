#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	srand(time(NULL));
	int array[3][3],i,j,line[3]={0};
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			array[i][j]=(rand()%50)+1;
			if(array[i][j]>9){
				printf("%d ",array[i][j]);
			}else{
				printf(" %d ",array[i][j]);
			}
			line[i]+=array[i][j];
		}
		printf("\n");
	}
	
	printf("\n�Ĥ@�C�G%d,�����G%d",line[0],line[0]/3);
	printf("\n�ĤG�C�G%d,�����G%d",line[1],line[1]/3);
	printf("\n�ĤT�C�G%d,�����G%d",line[2],line[2]/3);
	printf("\n�﨤�u�G%d,%d",array[0][0]+array[1][1]+array[2][2],array[0][2]+array[1][1]+array[2][0]);
	return 0;
}
