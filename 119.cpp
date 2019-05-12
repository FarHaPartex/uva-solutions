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
    int frnd,amount,people;
    string str1, str2;
    vector<string> v;
    map<string,int> my_map;
    sc("%d",&frnd);
    while (1)
    {
       for(int i=0 ; i<frnd ; i++)
       {
           cin>>str1;
           v.pb(str1);
       } 


       for(int i=0 ; i<frnd ; i++)
       {
           cin>>str2>>amount>>people;
           if(people)
           {
               my_map[str2] -= (amount/people)*people;
           }

           for(int j=0 ; j<people ; j++)
           {
               cin>>str2;
               my_map[str2]+= (amount/people);
           }
       }

       for(int i=0 ; i<frnd ; i++)
       {
           cout<<v[i]<<" "<<my_map[v[i]]<<endl;
       }

       
       v.clear();
       my_map.clear();
       if(cin>>frnd) cout<<endl;
       else break;
    }
    
    return 0;
}