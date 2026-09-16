// 实现内存拷贝，支持内存重叠
void *my_memmove(void *dest, const void *src, size_t n)
{
	if(dest==NULL||src==NULL){
		return NULL;
	}
	char *d=dest,*start=dest;
	const char *s=src;
	if(d>s&&d<s+n){
		d=d+n-1;
		s=s+n-1;
		while(n--){
			*d=*s;
			d--;
			s--;
		}
	}
	else{
		while(n--){
			*d=*s;
			d++;
			s++;
		}
	}
	return start;
}