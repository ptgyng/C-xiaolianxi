void safe_free(int **pp){
	if(pp!=NULL&&*pp!=NULL){
		free(*pp);
	*pp=NULL;}
}
	