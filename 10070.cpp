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


bool divider(char year[], int z, int p)
{
    int c = 0,i;
    for(i=0;i<z;i++)
    {
        c = ((year[i]-'0') + c * 10)% p;
    }
    if(c == 0)return 0;
    else return 1;
    
}

int main()
{
    char year[1000000];
    int l=0;

    while (sc("%s",year)!=EOF)
    {
        int flag,x,leap;
         x = strlen (year);
        if(l)
        printf("\n");

        l = 1;
        flag = 0;
        leap = 0;

        if( (divider(year,x,4) == 0 && divider(year,x,100) != 0 )||(divider(year,x,400) == 0))
        {
            printf("This is leap year.\n");
            leap = 1;
            flag = 1;

        }

        if( divider(year,x,15) == 0)
        {
            printf("This is huluculu festival year.\n");
            flag = 1;
        }

        if( leap == 1 && divider(year,x,55)==0 )
        printf("This is bulukulu festival year.\n");

        if(flag == 0)
        printf("This is an ordinary year.\n");
        
    }
    
}