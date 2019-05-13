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
    int h,m,timeMin;
    float hDegree,mDegree,angle;
    while(sc("%d:%d",&h,&m)==2)
    {
        if(h==0 && m==0)
        break;

        hDegree = .5 * ((60*h)+m) ;
        mDegree = 6*m;

        //cout<<hDegree<<" "<<mDegree<<endl;

        angle = hDegree - mDegree ;
        if(angle < 0)
        angle = (-1) * angle;

        if(angle > 180)
        angle = 360 - angle;


        

        pf("%.3f\n",angle);
    }
}