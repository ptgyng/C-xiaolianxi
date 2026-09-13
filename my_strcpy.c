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
int my_strlen(const char *str){
	if(str==NULL){
		return 0;
	}
	int count=0;
	while(*str!='\0'){
		count++;
		str++;
	}
	return count;
}
