#include<iostream>
#include<vector>
#include<set>
#include<ctime>
#include()
#include<cstdlib>
using namespace std;

void fill_random_int(vector<int> &v,int cnt){
	v.clear();
	for(int i =0;i<cnt;i++)
	v.push_back(rand());
}

void test_sort(vector<int> & v){
	sort(v.begin(),v.end());
	for(int i = 0 ;i < v.size();i++)
			assert(v[i]<v[i+1]);
}
int main(){
	srand(time(NULL));
	vector<int> v;
	fill_random_int(v,100000);
	test_sort(v);
	return 0;
}
