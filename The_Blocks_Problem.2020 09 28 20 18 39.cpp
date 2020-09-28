#include <cstdio>
#include <string>
#include <vector>
#include <iostream>
using namespace std;

const int maxn = 30;
vector<int> pile[maxn];

void find_block(int a,int &p,int &h){
	for(p=0;p<n;p++){
		for(h=0;h<pile[p].size();h++)
		if(pile[p][h]==a) return;
	}
}

void clear_above(int p,int h){
	for(int i = h+1;i <pile[p].size();i++){
		int b = pile[p][i];
		pile[b].push_back(b);
	}
	pile[p].resize(h+1);
	
}

void pile_onto(int p,int h,int p2){
	for(int i = h;i<pile[p].size();i++){
		pile[p2].push_back()
	}
}
