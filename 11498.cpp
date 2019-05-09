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
    int t,a,b,cs,x,y;

    while(sc("%d",&t)==1)
    {
        if(t==0)
        break;

        sc("%d %d",&a,&b);

        cs = t;

        while(cs--)
        {
            sc("%d %d",&x,&y);

            if(a<x && b<y)
            pf("NE\n");
            else if(a>x && b<y)
            pf("NO\n");
            else if(a>x && b>y)
            pf("SO\n");
            else if(a<x && b>y)
            pf("SE\n");
            else if(a==x || b==y)
            pf("divisa\n");
        }
    }

}
