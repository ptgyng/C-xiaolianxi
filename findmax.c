#include<stdio.h>
int findMax(int *p,int len){
	int max=*p;
	int *q=p;
	for(int i=1;i<len;i++){
		if(*(++q)>max)
		max=*q;
	}
	return max;
}
int main(void){
	int arr[]={22,5,88,13,41};
	int max1=findMax(arr,5);
	printf("max=%d\n",max1);
	return 0;
}