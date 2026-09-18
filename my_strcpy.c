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
// 字符串拼接，把src接到dest末尾，dest要有足够空间
char *my_strcat(char *dest, const char *src)
{
	if(dest==NULL||src==NULL){
		return NULL;
	}
	char *start=dest;
	while(*dest!='\0'){
		dest++;
	}
	while(*src!='\0'){
		*dest=*src;
		dest++;
		src++;
	}
	*dest='\0';
	return start;
}
