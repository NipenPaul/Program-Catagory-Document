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
    int n,c;
    while(scanf("%d",&n)==1)
    {
    if (n>=1&&n<=200)
    {
       c=n/2;
       n=c+n;
       printf("%d\n",n);
    }
    }
    return 0;
}

