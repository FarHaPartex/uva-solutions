#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
    int n,f,a,b,c,sum;
    scanf("%d",&n);

    while(n--)
    {
        scanf("%d",&f);
        sum=0;

        while(f--)
        {
            scanf("%d %d %d",&a,&b,&c);
            sum += (a*c);
        }

        printf("%d\n",sum);
    }

    return 0;
}