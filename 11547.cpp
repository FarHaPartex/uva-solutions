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
    long t,n, result,prev;
    sc("%ld",&t);

    while(t--)
    {
        sc("%ld",&n);
        result = ((((((567*n)/9)+7492)*235)/47)-498);
        //pf("%ld\n",result);

        // while(result!=0)
        // {
        //     prev = result % 10;
        //     result /= 10;
        //     if(result/10 == 0)
        //     break;
        // }
        result /= 10;
        prev = result % 10;

        if(prev < 0)
        prev = prev *(-1);

        pf("%ld\n",prev);

    }
}