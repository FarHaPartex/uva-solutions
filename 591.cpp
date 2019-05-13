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
    int n,sum, average,minChange,cs=1;
    int data[101];

    while(sc("%d",&n) && n)
    {
        sum =0;
        minChange = 0;
        for(int i=0 ; i<n ; i++)
        {
            sc("%d",&data[i]);
            sum += data[i];
        }

        average = sum / n;

        for(int i=0 ; i<n ; i++)
        {
            if(data[i]< average)
            {
                minChange += (average - data[i]);
            }
        }

        pf("Set #%d\n",cs++);
        pf("The minimum number of moves is %d.\n",minChange);

        cout<<endl;

    }
}