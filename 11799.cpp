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

int main()
{
    int t,n,a,mx=-100;

    sc("%d",&t);

    for(int i=1 ; i<=t ; i++)
    {
        sc("%d",&n);
        mx=-100;
        while (n--)
        {
            sc("%d",&a);
            if(mx<a)
            mx=a;
        }

        pf("Case %d: %d\n",i,mx);
    }
    return 0;
}