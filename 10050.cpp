#include<iostream>
#include<cstdio>
#include<stack>
#include<queue>
#include<vector>
#include<algorithm>
#include<map>
#include<cstring>
#include<sstream>
#include<cmath>

using namespace std;

const double pi = 2*acos(0);
#define pf printf
#define sc scanf
#define pb push_back
#define MIN(x,y) ((x) < (y) ? (x) : (y))
#define MAX(x,y) ((x) > (y) ? (x) : (y))

int main()
{
    int t,n,p,fri,sat,h,cnt;
    int days[3655];
    sc("%d",&t);

    while(t--)
    {
        sc("%d",&n);
        fri = 6;
        sat = 7;
        cnt=0;

        for(int i=1 ; i<=n ; i++)
        {
            if(fri == i)
            {
                days[i]=-1;
                fri += 7;
            }
            else if(sat == i)
            {
                days[i] = -1;
                sat += 7;
            }
            else
            days[i] = 0;
        }

        sc("%d",&p);

        for(int i=1 ; i<=p ; i++)
        {
            sc("%d",&h);
            int tst = h;
            while(tst <= n)
            {
                if(days[tst]==-1)
                {
                    tst += h;
                    continue;
                }
                days[tst] = 1;
                tst += h;
            }
        }

        for(int i=1 ; i<=n ; i++)
        {
            if(days[i]==1)
            cnt++;
        }

        pf("%d\n",cnt);

    }
}