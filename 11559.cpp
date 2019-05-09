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
    long n,a,b,h,w,p,price,cost;
    bool k;
    while(sc("%ld %ld %ld %ld",&n,&b,&h,&w)==4)
    {
        cost = 15000000;
        for(long i=1 ; i<=h ; i++)
        {
            sc("%ld",&price);
            for(long j=1 ; j<=w ; j++)
            {
                sc("%ld",&a);
                p=0;
                if(a>=n)
                {
                    p = price * n;
                    if(cost > p)
                    cost= p;
                }
                
            }

            
        }

        if(cost > b)
        {
           pf("stay home\n");
        }
        else
        {
            pf("%ld\n",cost);
        }
        
    }
    return 0;
}