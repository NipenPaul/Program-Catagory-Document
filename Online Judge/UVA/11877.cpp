#include<iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <cctype>
#include <stack>
#include <queue>
#include <vector>
#include <map>
#include <sstream>
#include <set>
#include <math.h>
using namespace std;
int main()
{
    long long int n,ans;
    while(scanf("%lld",&n)==1)
    {
        if(n==0)
        {
            break;
        }
        else
        {
            ans=n/2;
            printf("%lld\n",ans);
        }
    }
    return 0;
}
