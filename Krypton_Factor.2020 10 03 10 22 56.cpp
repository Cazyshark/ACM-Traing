#include<bits/stdc++.h>
using namespace std;

int S[60],n;
int cnt =0;
int L =3;
int dfs(int cur) {
	if(cnt = n) {
		cnt++;
		for(int i = 0; i < cur; i++)printf("%c",'A'+S[i]);
		printf("\n");
		return 0;
	}
	for(int i = 0; i < L; i++) {
		S[cur] = i;
		int ok = 1;
		for(int j = 1; j*2 <= cur+1; j++) {
			int equal = 1;
			for(int k = 0; k < j; k++)
					if(S[cur - k]!=S[cur-k-j]){ equal = 0;break;}
			if(equal){ ok = 0;break;}
        }
     if(ok) if(!dfs(cur+1)) return 0;
	}
	return 1;
}

int main(){
	int cur = 10;
	int n = 5;
	dfs(0);
	return 0;
}
