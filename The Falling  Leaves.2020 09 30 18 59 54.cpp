#include<bits/stdc++.h>
using namespace std;

const int maxn = 100000;
int s[manx];

void build(int p){
	 int v;
	 cin >> v;
	 if( v == -1) return ;
	 sum[p] += v;
	 build(p-1);build(p+1);
}

bool init(){
	int v
}
