#include<cstdio>
#include<stack>
using namespace std;

const int maxn = 110;
int n,target[maxn];

int main() {
	while(scanf("%d",&n) == 1) {
		stack<int> s;
		int A = 1,B=1;
		for(int i = 1; i<=n; i++) {
			scanf("%d",&target[i]);
		}
		int ok =1;
		while(B<=n) {
			if(A==target[B]) {     //进去直接出不用考虑(非进栈情况)
				A++;
				B++;
			} else if(!s.empty()&&s.top() == target[B]) { // 栈顶元素为出去元素，成立
				s.pop();
				B++;
			} else if(A<=n) s.push(A++);
			else {
				ok = 0;
				break;
			}
		}
		printf("%s\n",ok?"Yes":"No");
	}
	return 0;
}
