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
    int t,i;
    double c,d,f,a;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lf%lf",&c,&d);
        f=9*c/5+d;
        a=5*f/9;
        printf("Case %d: %.2lf\n",i,a);
    }
    return 0;
}
