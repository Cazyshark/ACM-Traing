#include<cstdio>
#include<cctype>
#include<cstring>
using namespace std;

const int maxn = 200 + 10;
int n;
char buf[maxn][maxn];

void dfs(int r,int c){
	printf("%c(",buf[r][c]);
	if(r+1<n && buf[r+1][c] == '|'){
		int i = c;
		while(i-1 >= 0 && buf[r+2][i-1] == '-')i--;
		while()
	}
}
