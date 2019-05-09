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
    int t,a, sum=0;
    char str[15];

    sc("%d",&t);

    while(t--)
    {
        sc("%s",&str);
        if(strcmp(str, "donate") == 0)
        {
            sc("%d",&a);
            sum += a;
        }
        else
        {
            pf("%d\n",sum);
        }
    }
}
