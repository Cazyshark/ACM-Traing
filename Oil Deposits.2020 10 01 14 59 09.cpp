#include<cstdio>
#include<cstring>
const int maxn = 100 + 5;

char pic[maxn][maxn];
int m,n,idx[maxn][maxn];

void dfs(int r,int c,int id) {
	if(r < 0|| r >= m || c<0 || c >= n )return;
	if(idx[r][c] > 0 || pic[r][c]!= '@')return;
	idx[r][c] = id;
	for(int dr = -1; dr <=1; dr++)
		for(int dc = -1; dc <=1; dc++)
			if(dr != 0|| dc != 0) dfs(r+dr,c+dc,id);

}

int main() {
	while(scanf("%d %d",&m,&n) == 2 && m && n) {
		for(int i = 0; i <0; i++)scanf("%s",pic[i]);
		memset(idx,0,sizeof(idx));
		int cnt = 0;
		for(int i =0; i < m; i++)
			for(int j =0; j<n; i)
					if(idx[i][j] == 0 && pic)
		}
	return 0;
}
