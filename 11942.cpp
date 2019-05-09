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
    int t,prev,a;
    bool ascending,descending, error;
    pf("Lumberjacks:\n");
    sc("%d",&t);

    while(t--)
    {
        ascending = false;
        descending = false;
        error = false;
        sc("%d",&prev);

        for(int i=2 ; i<=10 ; i++)
        {
            sc("%d",&a);
            if(i==2)
            {
                if(prev < a)
                ascending = true;
                else if(prev > a)
                descending = true;

                prev = a;

                continue;
            }

            if(ascending)
            {
                if(prev < a){
                    prev = a;
                }
                else{
                    error = true;
                    //pf("ascending prev: %d , a: %d",prev,a);
                    //break;
                }
            }
            else if(descending)
            {
                if(prev > a){
                    prev = a;
                }
                else{
                    //pf("descending prev: %d , a: %d",prev,a);
                    error = true;
                   // break;
                }
            }
        }

        if(error)
        pf("Unordered\n");
        else
        pf("Ordered\n");
    }
    return 0;
}