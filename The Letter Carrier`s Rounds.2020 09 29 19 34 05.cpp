#include<bits/stdc++.h>
using namespace std;

void parse_address(const string& s,string& user,string& mta){
	int k  = s.find('@');
	user = s.substr(0,k);
	mta = s.substr(k+1);
}

int main(){
	int k;
	string s,t,user1,mta1,user2,mta2;
	set<string> addr;
	//输入所有mta
	while(cin>>s && s!="*"){
		cin >> s >> k;
		while(k--){
			cin>>t;
			addr.insert(t+"@"+s);
		}
	}

	//处理发件人地址
	while(cin>> s && s != "*"){
		parse_address(s,user1,mta1);
	};
	
	vector<string> mta;
	map<string,vector<string> >dest;
	set<string> vis;
	while(cin>>t && t!="*"){
		parse_address(t,user2,mta2);
		if(vis.count(t)) continue;
		vis.insert()
	}
	
}
