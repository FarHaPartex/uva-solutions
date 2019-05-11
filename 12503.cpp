#include<iostream>
#include<cstdio>
#include<stack>
#include<queue>
#include<vector>
#include<algorithm>
#include<map>
#include<cstring>
#include<string>
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
    int t,n,p,a,b;
    char str[10];
    int data[110];

    sc("%d",&t) ;

    while(t--)
    {
        cin >> a;
        p=0;
        for(int i=1 ; i<=a ; i++)
        {
           sc("%s",str);

           if(str[0]=='R')
           {
               p++;
               data[i]=1;
           }
           else if(str[0]=='L')
           {
               p--;
               data[i]=-1;
           }
           else
           {
            sc("%s%d",str,&b);
            p+=data[b];
            data[i] = data[b];

           }
        }

        pf("%d\n",p);

    }
}