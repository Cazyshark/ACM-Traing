#include<cstdio>
#include<algorithm>
using namespace std;

const int maxn = 105;

struct building{
	int id;
	double x,y,w,d,h;
	bool operator < (const building& rhs)const {
		 return x<rhs.x||(x=rhs.x )
	}
};
