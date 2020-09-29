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
	
	
}
