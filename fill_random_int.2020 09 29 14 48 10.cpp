#include<iostream>
#include<vector>
#include<set>
#include<ctime>
#include<cstdlib>
using namespace std;

void fill_random_int(vector<int> &v,int cnt){
	v.clear();
	for(int i =0;i<cnt;i++)
	v.push_back(rand());
}

int main(){
	srand(time(NULL));
	
}