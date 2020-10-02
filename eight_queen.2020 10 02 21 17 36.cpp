#include<bits/stdc++.h>
using namespace std;

void search(int cnt){
	if(cur==n)tot++;
	else for(int i = 0;i<n;i++){
		int ok = 1;
		c[cur] = i;
		for(int j = 0;j < cur;j++)
				if(c[cur] == c[j]||cur-c[cur] == j-c[j]||cur+c[cur] == j+c[j]){
					ok = 0;
					break;
				}
		if(ok)search (cur+1);
	}
}

