//À§ÄÑµÄ´®
#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;
int n, s[1001], L, cnt;

int DFS(int cur)
{
    if(cnt ++ == n )
    {
        for(int i=0; i<cur; i++) printf("%c",'A'+s[i]);
        printf("\n");
        return 0;
    }
    for(int i=0; i<L; i++)
    {
        s[cur] = i ;
        int OK = 1 ;
        for(int j=1; j*2<=cur+1; j++)
        {
            int e = 1 ;
            for(int k=0; k<j; k++)
                if(s[cur-k] != s[cur-k-j])
                {
                    e = 0 ;
                    break ;
                }
            if(e)
            {
                OK = 0 ;
                break ;
            }
        }
        if(OK) if(!DFS(cur+1)) return 0;
    }
    return 1;
}

int main()
{
    while(~scanf("%d %d",&n, &L))
    {
        cnt = 0;
        memset(s,0,sizeof(s));
        DFS(0);
    }

    return 0;
}
