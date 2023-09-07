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
    long long int a,b,c,d,e;
    while(scanf("%lld%lld",&a,&b)==2)
    {
        c=(~a)&(b);
        d=(~b)&(a);
        e=c|d;
        printf("%lld\n",e);
    }
    return 0;
}
