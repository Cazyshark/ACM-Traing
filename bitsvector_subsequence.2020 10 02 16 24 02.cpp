void print_subset(int n,int *B,int cnr){
	if(cur == n){
		for(int i =0; i < cur; i++)
				if(B[i]) printf("%d",i);
		printf("\n");
		return;
	}
	B[cur] = 1;
	print_subset(n,B,cur+1);
	B[cur] = 0;
	print_subset(n,B,cur+1);
}
