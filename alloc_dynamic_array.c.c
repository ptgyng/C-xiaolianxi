void alloc_arr(int **pArr,int n){
	*pArr=malloc(n * sizeof(int));
}
void safe_free(int **pArr){
	free(*pArr);
	*pArr=NULL;
}
int main(void){
	int *pA;
	int n;
	scanf("%d",&n);
	alloc_arr(&pA,n);
	if(pA!=NULL){
		for(int i=0;i<n;i++){
		*(pA+i)=(i+1)*10;
		printf("%d ",*(pA+i));
		}
	}
	safe_free(&pA);
	return 0;
}