#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<vector>
#include<stack>
#include<queue>

using namespace std;

int getSummation(int n)
{
    int k,sum=0;
    while (true)
    {
        k = n%10;
        sum+=k;
        n = n/10;
        if(n==0)
        break;
    }

    return sum;
    
}

int main()
{
    int n,k;

    while(scanf("%d",&n)==1 && n)
    {
        k=n;
        while (true)
        {
           k = getSummation(k);
           if(k<10)
           break;
        }

        printf("%d\n",k);
        
    }
    
    return 0;
}