#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

const int maxcol = 60;
const int maxn = 105;
string filename[maxn];

void print(const string& s,int len,char extra) {
	cout<<s;
	for(int i = 0 ; i < len-s.length(); ++i) {
		cout <<extra;
	}
}

int main(){
	
}
