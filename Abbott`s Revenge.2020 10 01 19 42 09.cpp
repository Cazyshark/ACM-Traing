#include<bits/stdc++.h>
using namespace std;

const char* dirs = "NESW";               //directions
const char* turns = "FLR";               //routers
int dir_id(char c){
	return strchr(dirs,c)-dirs;
}
int turn_id(char c){
	return strchr(turns,c)-turns;
}

const int dr[] = {-1,0,1,0};
const int dc[] = {0,1,0,-1};

Node walk(const Node& u,int turn){
	 int dir = u.dir;
	 if(turn == 1){
	 	dir = (dir + 3) % 4;
	 }
	 if(turn == 2){
	 	dir = (dir + 1) % 4;
	 }
	 return Node(u.r + dr[dir] , u.c + dc[dir],dir);
}

void solve(){
	queue <Node> q;
	memset(d,-1,sizeof(d));
	Node u(r1,c1,dir);
	d[u.r][u.c][u.dir] = 0;
	q.push(u);
	
}
