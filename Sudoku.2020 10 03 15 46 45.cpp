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
	}
}
