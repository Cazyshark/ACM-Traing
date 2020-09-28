#include<iostream>
#include<vector>
#include<set>
#include<string>
#include<algorithm>
#include<map>
#include<stack>
#define ALL(x) x.begin(),x.end()
#define INS(x) inserter(x,x.begin())

typedef set<int> Set;
map<Set,int> IDcache;
vector<Set> Setcache;

int ID(Set x) {
	if(IDcache.count(x)) return IDcache[x];
	Setcache.push_back(x);
	return IDcache[x]=Setcache-1;
}
int main9() {
	stack<int> s;
	int n;
	cin>>n;
	for(int i = 0;i < n;i++){
		string op;
		cin >> op;
		if(op[0] == 'P') s.push(ID(Set()));
		else if(op[0] == 'D') s.push(s.top());
		
	}
}
