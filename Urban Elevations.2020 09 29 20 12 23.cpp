#include<cstdio>
#include<algorithm>
using namespace std;

const int maxn = 105;

struct building{
	int id;
	double x,y,w,d,h;
	bool operator < (const building& rhs)const {
		 return x<rhs.x||(x=rhs.x && y < rhs.y);
	}
}b[maxn];

int n;
double x[maxn*2];

bool cover(int i,double mx){
	return b[i].x <= mx && b[i].x+b[i].w >= mx;
}

int main(){
	int kase = 0;
	while(scanf("%d",&n) == 1 && n){
		for(int i =0;i<n;++i){
			scanf("%lf%lf%lf%lf",&b[i].x,&b[i].y,&b[i].w,&b[i].h);
		}
		x[i*2]=b[i].x;
		x[i*2+1]=b[i].x+b[i].w;
		
	}
}
