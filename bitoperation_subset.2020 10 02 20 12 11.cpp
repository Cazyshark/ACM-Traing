#include<bits/stdc++.h>
using namespace std;

void print_subset(int n,int s){
	for(int i = 0; i < n;i++)
			if(s&(1 << i))printf("%d ",i);
	printf("\n");
}

int main(){
	int A=12345;
	print_subset(5,A);
	return 0;
}
