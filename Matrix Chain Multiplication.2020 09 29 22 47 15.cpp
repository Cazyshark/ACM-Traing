#incldue<bits/stdc++>
using namespace std;

struct Matrix{
	int a,b;
	Matrix(int a =0 ,int b =0):a(a),b(b){
	}
}m[26];

stack<Matrix> s;

int main(){
	int n;
	cin >> n;
	for(int i =0 ; i<n;i++){
		string name;
		cin >> name;
		int k = name[0]-'A';
		cin >> m[k].a >>m[k].b;
		
	}
	string expr;
	while(cin>>expr){
		int len = expr.length();
		bool error = false;
		int ans = 0;
		for(int i = 0 ; i < len ; i++){
			if(isalpha(expr[i]))s.push(m[expr[i]-'A']);
			else if(expr[i] == ')'){
				Matrix m2 = s.top();s.pop();
				Matrix m1 = s.top();s.
			}
		}
	}
	
}
