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
    int n,m,c,a,totalPower;
    int power[25],powerSwitch[25];
    int mxPower,testCase=1;

    while(sc("%d %d %d",&n,&m,&c)==3)
    {
        if(n==0 && m==0 && c==0)
        break;

        memset(powerSwitch,0,sizeof(powerSwitch));
        mxPower = -120;
        totalPower =0;

        for(int i=1 ; i<=n ; i++)
        {
            sc("%d",&power[i]);
        }

        for(int i=0 ; i<m ; i++)
        {
            sc("%d",&a);
            if(powerSwitch[a]==0)
            {
                powerSwitch[a] =1;
                totalPower += power[a];
                if(mxPower < totalPower)
                mxPower = totalPower;
            }
            else if(powerSwitch[a]==1)
            {
                powerSwitch[a]=0;
                totalPower -= power[a];
            }

            //pf("Total Power: %d\n",totalPower);
        }
        pf("Sequence %d\n",testCase);
        testCase++;

        if(totalPower <= c)
        {
            pf("Fuse was not blown.\n");
            pf("Maximal power consumption was %d amperes.\n",mxPower);
        }
        else
        {
            pf("Fuse was blown.\n");
        }

        cout<<endl;
        


    }
}