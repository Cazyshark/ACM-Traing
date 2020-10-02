#include<bits/stdc++.h>
using namespace std;

const char* dirs = "NESW";
const char* turns = "FLR";
int dir_id(char c){
	return strchr(dirs,c)-dirs;
}
int turn_id(char c){
	return strchr(turns,c)-turns;
}

const int dr[] = {-1,0,1,0};
const int dc[] = {0,1,0,-1};

Node walk(const )
