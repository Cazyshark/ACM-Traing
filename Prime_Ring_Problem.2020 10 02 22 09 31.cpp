#include<bits/stdc++.h>
//#####################################################################
//### Solution 1                                                      #
//### Arrangement                                                     #
//#####################################################################
for(int i = 2; i <= n*2 ; i++) isp[i] = is_prime(i);
do{
	int ok = 1;
	for(int i = 0; i < n; i++)if(!isp[A[i]+A[(i+1)%n]]){
		ok = 0;
		break;
	}
	if(ok){
		for(int i = 0; i < n; i++)printf("%d ",A[i]);
		printf("\n");
	}
}while(next_permutation(A+1,A+n));
//######################################################################
//### Solution 2                                                       #
//### Backtracking                                                     #
//######################################################################

void dfs(int cur){
	if(cur == n && isp[A[0]+A[n-1]){
		for(int i = 0;i < n;i++)printf("%d ",A[i]);
		printf("\n");
	}else for()
}
