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
	//ÊäÈëËùÓĞmta
	while(cin>>s && s!="*"){
		cin >> s >> k;
		while(k--){
			cin>>t;
			addr.insert(t+"@"+s);
		}
	}

	while(cin>> s && s != "*"){
		parse_address(s,user1,mta1);
	}
}
