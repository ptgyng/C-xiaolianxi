int my_strlen(const char *str){
	if(str==NULL){
		return NULL;
	}
	const char *start=str;
	while(*str!='\0'){
		str++;
	}
	return str-start;
}
char *my_strcpy(char *dest,const char *src){
	if(src==NULL||dest==NULL){
		return NULL;
	}
	char *start=dest;
	while(*src!='\0'){
		*dest++=*src++;
	}
	*dest='\0';
	return start;
}
