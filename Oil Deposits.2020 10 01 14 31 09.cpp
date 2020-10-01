#include<cstdio>
#include<cstring>
const int maxn = 100 + 5;

char pic[maxn][maxn];
int m,n,idx[maxn][maxn];

void dfs(int r,int c,int id){
	if(r < 0|| r >= m || c<0 || c >= n )return;
	if(idx[r][c] > 0 || pic[r][c]!= '@')return;
	idx[r][c] = id;
	for(int dr = -1;dr <=1;d++)
			for(int dc = -1;dc <=1;dc++)
			if(dr != 0|| dc != 0)dfs(r+d,c+dc,id);

}
