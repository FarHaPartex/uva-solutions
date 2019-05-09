#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<vector>
#include<stack>
#include<queue>

using namespace std;

#define sc scanf
#define pf printf

int main()
{
    int t,prev,b,n, up, down;
    sc("%d",&t);
    for(int j=1 ; j<=t ; j++)
    {
        sc("%d",&n);
        up=0;
        down=0;
            sc("%d",&prev);
            for(int i=2 ; i<=n ; i++)
            {
                sc("%d",&b);
                if(prev < b)
                up++;
                else if(prev > b)
                down++;

                prev = b;
            }

        pf("Case %d: %d %d\n",j,up,down);
    }
    return 0;
}