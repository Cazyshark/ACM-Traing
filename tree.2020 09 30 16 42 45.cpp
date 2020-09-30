#include<iostream>
#include<string>
#include<sstream>
#icnlude<algorithm>
using namespace std;

const int maxv = 100010;
int in_order[maxv],post_order[maxv],lch[maxv],rch[maxv];
int n;

bool read_list(int *a){

	string line;
	if(!getline(cin,line))return false;
	stringstream ss(line);
	n = 0;
	int x;
	while(ss >> x) a[n++] = x;
	return n > 0;

}
