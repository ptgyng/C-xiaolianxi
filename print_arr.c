#include<stdio.h>
void printArr(int arr[]){
	int *p=arr;
	for(int i=0;i<5;i++){
		printf("%d ",*(p+i));
	}
}
int main(void){
	int arr1[]={10,20,30,40,50};
	printArr(arr1);
	return 0;
}