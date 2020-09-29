#include<cstdio>
#include<stack>
using namespace std;

const int maxn = 110;
int n,targe[maxn];

int main(){
	while(scanf("%d",&n) == 1){
		stack<int> s;
		int A = 1,B=1;
		for(int i = 1;i<=n;i++){
			scanf("%d",&target[i])
		}
		int ok =1;
		while(B<=n){
			if(A==target[B]){
				A++;
				B++;
			}
			else if(!s.empty()&&s.top() == target[B]){
				s.pop();
				B++;
				
			}
		}
	}
}
