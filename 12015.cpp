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
    int t,mx;
    char str[10][200];
    int data[10];

    sc("%d",&t);

    for(int i=1 ; i<=t ; i++)
    {
        mx=-120;
        for(int j=0 ; j<10 ; j++)
        {
            cin>>str[j]>>data[j];
            if(mx < data[j])
            mx = data[j];
        }

        pf("Case #%d:\n",i);

        for(int j=0 ; j<10 ; j++)
        {
            if(mx == data[j])
            {
                pf("%s\n",str[j]);
            }
        }
    }
    return 0;
}