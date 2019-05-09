#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
   int test_case,a,b;
   scanf("%d",&test_case);
   while(test_case--)
   {
    scanf("%d %d",&a,&b);
    if(a>b)
    {
        printf(">\n");
    }
    else if(a < b)
    {
        printf("<\n");
    }
    else{
       printf("=\n");
    }
   }
   return 0;
}
