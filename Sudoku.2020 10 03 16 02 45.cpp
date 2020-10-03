#include<bits/stdc++.h>
using namespace std;

typedef int State[9];
const int maxstate = 100000;
State st[maxstate],goal;
int dist[maxstate];

const int dx[] = {-1,-1,0,0};
const int dy[] = {0,0,-1,-1};

int bfs(){
	init_lookup_table();
	int  front = 1,rear = 2;
	while(front < rear){
		State& s = st[front];
		if(memcmp(goal,s,sizeof(s)) == 0) return front;
		int z;
		for( z = 0;z<9;z++)if(!s[z]) break;
		int x = z/3,y = z%3;
		for(int d = 0;d<4;d++){
			int newx = x +dx[d];
			int newy = y +dy[d];
			int newz = newx * 3 + newy;
			
			if(newx >=0 && newx <3 && newy >= 0 && newy <3){
				State& t = st[rear];
				memcpy(&t,&s,sizeof(s));
				t[newz] = s[z];
				t[z] = s[newz];
				dist[rear] = dist[front] + 1;
				if(try_to_insert(rear))rear++;
			}
		}
		front ++;
	}
	return 0;
}

int main(){
	for(int i = 0; i < 9;i++)scanf("%d",&st[1][i]);
	for(int i = 0; i < 9;i++)scanf("%d",&goal[i]);
}
