#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
	int rndNum(int i){
		i=(rand()%50)+1;
		return i;
	}
	
int main(int argc, char *argv[]) {
	srand(time(NULL));
	int i,a,x,y,f[3][3],sum[5]={0};
	i=(rand()%50)+1;
	for(x=0;x<=2;x++){
		for(y=0;y<=2;y++){
			f[x][y]=rndNum(a);
			sum[x]+=f[x][y];
			printf("%d ",f[x][y]);
		}
		printf("\n");
	}
	sum[3]=f[0][0]+f[1][1]+f[2][2];
	sum[4]=f[0][2]+f[1][1]+f[2][0];
	printf("第一列：%d,平均：%d \n第二列：%d,平均：%d\n第三列：%d,平均：%d\n對角線：%d,%d",sum[0],sum[0]/3,sum[1],sum[1]/3,sum[2],sum[2]/3,sum[3],sum[4]);
	return 0;
}

