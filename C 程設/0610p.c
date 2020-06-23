#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	/*
	int *ptr,i;
	ptr=(int *)malloc(3*sizeof(int));
	*ptr=11,*(ptr+1)=22,*(ptr+2)=33;
	for(i=0;i<3;i++){
		printf("ptr+%d=%d\n",i,*(ptr+i));		
	}
	free(ptr);
	*/
	
	//-----------------------
	
	/*
	int num,i;
	struct student{
		char name[10];
		int score;
	}*ptr;
	printf("學生總數：");
	scanf("%d",&num);
	ptr=(struct student *)malloc(num*sizeof(struct student));
	for(i=0;i<num;i++){
		fflush(stdin);
		printf("第%d位學生的姓名：",i+1);
		gets((ptr+i)->name);
		printf("第%d位學生的分數：",i+1);
		scanf("%d",&(ptr+i)->score);
		
	}
	printf("\n");
	for(i=0;i<num;i++){
		printf("%s：%d分\n",(ptr+i)->name,(ptr+i)->score);
	}
	free(ptr);
	*/
	
	//----------------------------
	
	int num=6,i;
	int inputNum[]={1,23,56,44,36,58};
	struct node{
		int id;
		int data;
		struct node *next;
	};
	typedef struct node NODE;
	NODE *first,*current,*previous;
	for(i=0;i<num;i++){
		current=(NODE *)malloc(sizeof(NODE));
		current->data=inputNum[i];
		current->id=i+1;
		if(i==1){
			first=current;
		}else{
			previous->next=current;
		}
		current->next=NULL;
		previous=current;
	}
	current=first;
	while(current!=NULL){
		printf("id=%d,data=%d\n",current->id,current->data);
		current=current->next;
	}
	
	return 0;
}
