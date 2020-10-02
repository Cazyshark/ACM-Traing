//##########################################################################################
//#              void print_permutations(Sequence A,Set S){
//#                   if(S.empty()) out A;
//#                   else form  little to large in S.v
//#                   {
//#                        print_permutations(Sequence A+v,Set S-{v});
//#					}
//#			   }
//###########################################################################################
#include<bits/stdc++.h>
using namespace std;


void print_permutation(int n,int *A,int cur){
	if(cur == n){
		for(int i = 0;i < n;i++)printf("%d",A[i]);
		printf("\n");
	}
	else for(int i = 1 ; i <= n; i++){
		int ok  = 1;
		for(int j = 0;j < cur;j++)
				if(A[j] == i) ok = 0;
		if(ok){
			A[cur] = i;
			print_permutation(n,A,cur+1);
		}
	}
}

int main(){
	int A[10]={0,1,2,3,4,5,6,7,8,9};
	int n = 10;
	int cur = 0;
	print_permutation(n,A,cur);
	return 0;
}
