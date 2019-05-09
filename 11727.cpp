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
  int t,a,b,c;
  int data[5];
  sc("%d",&t);
  for(int i=1 ; i<=t ; i++)
  {
    sc("%d %d %d",&a,&b,&c);
    data[0]=a;
    data[1]=b;
    data[2]=c;

    sort(data, data+3);

    pf("Case %d: %d\n",i,data[1]);

  }
}
