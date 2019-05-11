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
   int a,b,c,d,ans;
   int min_v, max_v;
   while(sc("%d %d",&a,&b)==2)
   {
       if(a<0 && b<0)
       break;
        min_v = MIN(a,b) ;
        max_v = MAX(a,b);

        c = max_v - min_v;
        d = min_v + 99 - max_v +1;
        ans = MIN(c,d);

        pf("%d\n",ans);


   } 
}