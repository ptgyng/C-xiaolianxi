#include<stdio.h>
char *my_strcpy(char *dest,const char *src){
	if(dest==NULL||src==NULL){
		return NULL;
	}
	char *start=dest;
	while(*src!='\0'){
		*dest=*src;
		dest++;
		src++;
	}
	*dest='\0';
	return start;
}