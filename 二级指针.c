#include <stdio.h>
#include <stdlib.h>
void alloc_int(int **pp){
	*pp=malloc(sizeof(int));
	if(*pp!=NULL) **pp=100;
}
int main(void){
	int *p=NULL;
	alloc_int(&p);
	if(p!=NULL) printf("%d",*p);
	free(p);
	p=NULL;
	return 0;
}