int alloc_2d_arr(int ***pArr,int row,int col){
	*pArr=malloc(row * sizeof(int *));
	if(*pArr==NULL){
		return -1;
	}
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
	return 0;
}
void  safe_free_2d_arr(int ***pArr,int row){
    if(*pArr==NULL){
    	return;
    }
	for(int i=0;i<row;i++){
		free((*pArr)[i]);
	}
	free(*pArr);
	*pArr=NULL;
}
int main(void){
	int **arr;
	if((alloc_2d_arr(&arr,3,4))!=0){
		return -1;
	}
	for(int i=0;i<3;i++){
		for(int j=0;j<4;j++){
			arr[i][j]=i*10+j;
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	safe_free_2d_arr(&arr,3);
	return 0;
}