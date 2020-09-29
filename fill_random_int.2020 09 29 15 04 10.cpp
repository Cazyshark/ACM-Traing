#include<iostream>
#include<vector>
#include<set>
#include<ctime>
#include<cstdlib>
#include<cstdlib>
#include<algorithm>
#include <assert.h>

using namespace std;

void fill_random_int(vector<int> &v,int cnt) {
	v.clear();
	for(int i =0; i<cnt; i++)
		v.push_back(rand());
}

void test_sort(vector<int> & v) {
	sort(v.begin(),v.end());
	printf("%d\n",v.size());
	for(int i = 0 ; i < v.size()-1; i++) {
		if(i>10000000)
					  cout<<1<<endl;
		assert(v[i] <= v[i+1]);
	}
}
int main() {
	srand(time(NULL));
	vector<int> v;
	fill_random_int(v,1000000000);
	test_sort(v);
	return 0;
}
