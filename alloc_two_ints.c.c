#include<stdio.h>
#include<stdlib.h>
void alloc_two_ints(int **p1,int **p2){
	*p1=malloc(sizeof(int));
	if(*p1 == NULL)
	    return;
	*p2=malloc(sizeof(int));
	if(*p2 == NULL)
	{
	    free(*p1); //防止内存泄漏
	    *p1 = NULL;
	    return;
	}
	**p1=20;
	**p2=50;
}
void safe_free(int **pp){
	if(*pp!=NULL){
		free(*pp);
	}
	*pp=NULL;
}
int main(void){
	int *p=NULL,*f=NULL;
	alloc_two_ints(&p,&f);
	printf("%d %d\n",*p,*f);
	safe_free(&p);
	safe_free(&f);
	return 0;
}