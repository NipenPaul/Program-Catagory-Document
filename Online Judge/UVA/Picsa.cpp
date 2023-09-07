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
    long long int a,i,sum=1;
    while(scanf("%lld",&a)==1)
    {
        if(a<0)
        {
            break;
        }
        for(i=1;i<=a;i++)
        {
            sum=sum+i;
        }
        printf("%lld\n",sum);
        sum=1;
    }
    return 0;
}
