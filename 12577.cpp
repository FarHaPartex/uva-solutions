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
    int t =1;
    char str[10];
    while(true)
    {
        sc("%s",&str);

        if(str[0]=='*')
            break;

        if(strcmp(str,"Hajj")==0)
            pf("Case %d: Hajj-e-Akbar\n",t++);
        else
           pf("Case %d: Hajj-e-Asghar\n",t++);
    }
}
