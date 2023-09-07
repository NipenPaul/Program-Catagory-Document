#include <iostream>
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
    int a,i,b,c,d,ans;
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        scanf("%d%d%d",&b,&c,&d);
        ans=d*(b+(b-c))/(b+c);
        printf("%d\n",ans);
    }
    return 0;
}

