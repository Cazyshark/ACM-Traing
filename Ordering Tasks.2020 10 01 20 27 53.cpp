
const int maxn = 10000;
int c[maxn];
int topo[maxn],t;

bool dfs(int u) {
	c[u] = -1;
	for(int v = 0; v < n; v++)
		if(G[u][v]) {
			if(c[v]<0) return false;
			else if(!c[v] && !dfs(v)) return false;
	}
	c[u] = 1;
	topo[--t] = u;
	return true;
}
bool toposort(){
	t = n;
	memset(c,0,sizeof(c));
	for(int u = 0;u < n;u++)if(!c[u])
	if(!dfs(u)) return false;
	return true;
}
