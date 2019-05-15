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
     int kase,c,val,line,i,j,k,len,n[200];
    double price;
    char text[10000],x[200];
    while(scanf("%d\n",&kase)==1)
    {
        for(k=1; k<=kase; k++)
        {
            price=0;
            scanf("%d\n",&val);
            for(j=1; j<=val; j++)
            {
                scanf("%c%d\n",&x[j],&n[j]);
                //cin>>x[j]>>n[j];
            }
            scanf("%d\n",&line);
            //cin>>line;
            for(j=1; j<=line; j++)
            {
                //gets(text);
                cin.getline(text,sizeof(text));
                len=strlen(text);
                for(i=1; i<=val; i++)
                {
                    for(c=0; c<len; c++)
                    {
                        if(x[i]==text[c])price+=n[i];
                    }
                }
            }
            printf("%.2lf$\n",price/100);
        }
    }
    return 0;
}