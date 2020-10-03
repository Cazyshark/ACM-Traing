#include<bits/stdc++.h>
//#####################################################################
//### Solution 1
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

