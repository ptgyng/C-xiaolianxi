#include<stdio.h>
#include<stdlib.h>
int alloc_2d_arr(int ***pArr,int row,int col){
	*pArr=malloc(row * sizeof(int *));
		if(*pArr==NULL){
		    return -1;//内存申请失败
	}
	else{
		for(int i=0;i<row;i++){
		(*pArr)[i]=malloc(col * sizeof(int));
		if((*pArr)[i]==NULL){
			for(int j=i-1;j>=0;j--){
				free((*pArr)[j]);
			}
			free(*pArr);
			return -1;
		}
	    }
		return 0;//内存申请成功
	}
}
void safe_free_2d_arr(int ***pArr,int row){
	if(*pArr!=NULL){
		for(int i=0;i<row;i++){
		free((*pArr)[i]);
	}
	free(*pArr);
	*pArr=NULL;
	}
}
int main(void){
	int **p;
	if(alloc_2d_arr(&p,3,4)==0){
		for(int i=0;i<3;i++){
			for(int j=0;j<4;j++){
				p[i][j]=i*10+j;
				printf("%d ",p[i][j]);
			}
			printf("\n");
		}
		safe_free_2d_arr(&p,3);
		return 0;
	}
	else{
		return -1;
	}
}
