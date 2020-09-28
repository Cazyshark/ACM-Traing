#include<iostream>
#include<string>
#include<cctype>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;

map<string,int> cnt;
vector<string> words;

string repr(const string &s){
	string ans = s;
	for(int i=0;i < ans.length();i++) ans[i]=tolower(ans[i]);
	sort(ans.begin(),ans.end());
	return ans;
}

int main(){
	
}
