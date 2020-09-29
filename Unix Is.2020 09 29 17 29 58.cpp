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
	int n;
	while(cin>>n){
		int M =0;
		for(int i =0;i<n;i++){
			cin>> filename[i];
			M = max(M,(int)filename[i].length());
		}
		
	}
	int cols= (maxcol - M)/(M+2)+1,rows = (n-1)/cols+1;
	
}
