#include<bits/stdc++.h>
using namespace std;

void print_subset(int n,int *A,int cur){
	for(int i = 0;i < cur;i++) printf("%d",A[i]);
	printf("\n");
	int s  = cur ?A[cur-1]+1:0;
	for(int i = s; i < n;i++){
		A[cur] = i;
		print_subset(n,A,cur+1);
	}
}

int main(){
	int A[10]={9,8,7,6,5,4,3,2,1};
	
	print_subset(9,A,0);
	return 0;
	
}
