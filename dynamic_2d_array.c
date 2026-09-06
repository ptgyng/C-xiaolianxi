int alloc_2d_arr(int ***pArr,int row,int col){
	*pArr=malloc(row * sizeof(int *));
		if(*pArr==NULL){
		    return -1;
	}
	else{
		for(int i=0;i<row;i++){
		(*pArr)[i]=malloc(col * sizeof(int));
		if((*pArr)[i]==NULL){
			for(int j=i;j>=0;j--){
				free((*pArr)[j]);
			}
			free(*pArr);
			return -1;
		}
	    }
		return 0;
	}
}
void safe_free_2d_arr(int ***pArr,int row){
	for(int i=0;i<row;i++){
		free((*pArr)[i]);
	}
	free(*pArr);
	*pArr=NULL;
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