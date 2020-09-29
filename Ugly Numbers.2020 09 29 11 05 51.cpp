#include<iostream>
#include<vector>
#include<queue>
#include<set>
using namespace std;
typedef long long LL;
const int corff[3]={2,3,5};

int main(){
	priority_queue<LL,vector<LL>,greater<LL> >pq;
	set<LL> s;
	pq.push(1);
	s.insert(1);
	for(int i = 1;;i++){
		LL x = pq.top();
		pq.pop();
		if(i==1500){
			cout<<"The 1500`th ugly number is"<<x<<""
		}
	}
}
