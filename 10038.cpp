#include<iostream>
#include<cstdio>
#include<stack>
#include<queue>
#include<vector>
#include<algorithm>
#include<map>
#include<set>
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
    int n;
	while (cin >> n) {
		int a, b;
		bool jolly = true;
		bool yet[3000];
		memset(yet, true, sizeof(yet));
		cin >> b;
		for (int i = 1; i < n; i++) {
			a = b;
			cin >> b;
			int c = abs(b - a);
			if (c < n && yet[c])
				yet[c] = false;
			else
				jolly = false;
		}
		cout << (jolly ? "Jolly" : "Not jolly") << endl;
	}
    
    return 0;
}