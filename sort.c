void bubble_sort(int* p,int n){
	int flag=0;
	for(int i=0;i<n-1;i++){
		flag=0;
		for(int j=1;j<n-i;j++){
			if(p[j]>p[j-1]){
			int temp=p[j];
			p[j]=p[j-1];
			p[j-1]=temp;
			flag=1;
		    }
	    }
	    if(flag==0){
	    	break;
		}
	}
}
void choose_sort(int* p,int n){
	int min=0;
	for(int i=0;i<n-1;i++){
		min=i;
		for(int j=i+1;j<n;j++){
			if(p[min]>p[j]){
				min=j;
			}
		}
		int temp=p[min];
		p[min]=p[i];
		p[i]=temp;
	}
}