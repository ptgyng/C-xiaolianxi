#include <stdio.h>
void set_num(int *val_ptr,int new_val){
	*val_ptr=new_val;
}
int main(void){
	int num,newnum;
	scanf("%d %d",&num,&newnum);
	set_num(&num,newnum);
	printf("%d\n",num);
	return 0;
}