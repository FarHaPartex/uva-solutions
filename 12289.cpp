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
    int t;
    char str[10];

    sc("%d",&t);
    getchar();

    while(t--)
    {
        //gets(str);

        cin>>str;

        if(strlen(str)==5)
        pf("3\n");
        else if((str[0]=='o' && str[1]=='n') ||
                (str[0]=='o' && str[1]=='e') ||
                (str[1]=='n' && str[2]=='e') ||
                (str[0]=='o' && str[2]=='e') ||
                (str[0]=='o' && str[2]=='n'))
        pf("1\n");
        else
        pf("2\n");
    }
}
