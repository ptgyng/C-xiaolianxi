#include<stdio.h>
void swap(int *x,int *y){
	int t;
	t=*x;
	*x=*y;
	*y=t;
	return;
}
int main(void){
	int a=12,b=34;
	swap(&a,&b);
	printf("a=%d,b=%d",a,b);
	return 0;
}