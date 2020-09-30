#include<cstdio>
#include<cstring>

const int len = 32;
const int maxn = 1024 +10;
char s[maxn];
int buf[len][len],cnt;


void draw(const char*s,int & p, int r ,int c,int w){
	char ch = s[p++];
	if(ch == 'p'){
		draw(s,p,r,c+w/2,w/2);
		draw
	}
}
