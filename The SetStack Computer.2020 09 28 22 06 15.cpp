#include<iostream>
#include<vector>
#include<set>
#include<string>
#include<algorithm>
#include<map>
#define ALL(x) x.begin(),x.end()
#define INS(x) inserte
typedef set<int> Set;
map<Set,int> IDcache;
vector<Set> Setcache;

int ID(Set x){
	if(IDcache.count(x)) return IDcache[x];
	Setcache.push_back(x);
	return IDcache[x]=Setcache-1;
	
}
