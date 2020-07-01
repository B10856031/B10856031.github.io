#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

	struct node{
		int id;
		int data;
		struct node *next;
	};
	typedef struct node NODE;
	NODE *first,*current,*previous;
	
int main(int argc, char *argv[]) {
	int num=6,i;
	FILE *fin, *fout;
	fin=fopen("in.txt","rt");
	fout=fopen("out.txt","w+t");
	
	int n[100],k=0;
	while(!feof(fin))
	{
		fscanf(fin,"%d",&n[k]);
		k++;
	}
	
	int idNum[k];
	for(i=1;i<=k;i++){
		idNum[i-1]=i;
	}
	b_sort(k,n,idNum);
	
	for(i=0;i<num;i++){
		current=(NODE *)malloc(sizeof(NODE));
		current->data=n[i];
		current->id=idNum[i];
		if(i==0){
			first=current;
		}else{
			previous->next=current;
		}
		current->next=NULL;
		previous=current;
	}
	current=first;
	while(current!=NULL){
		printf("%d,%d\n",current->id,current->data);
		fprintf(fout,"%d",current->id);
		fprintf(fout,",%d\n",current->data);
		current=current->next;
	}

	return 0;
}

b_sort(int k,int n[],int idNum[]){
	int i,j;
	for(i=0;i<k;i++){
		for(j=0;j<k-1-i;j++){
			if(n[j]<n[j+1]){
				int temp=n[j];
				n[j]=n[j+1];
				n[j+1]=temp;
				temp=idNum[j];
				idNum[j]=idNum[j+1];
				idNum[j+1]=temp;
			}
		}
	}
}
