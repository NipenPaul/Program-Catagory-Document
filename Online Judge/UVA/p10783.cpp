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
    int a,b,t,i,j;
    scanf("%d",&t);
    for(j=1;j<=t;j++)
    {
    scanf("%d%d",&a,&b);
      int sum=0;
        for(i=a;i<=b;i++)
        {
            if((i%2)!=0){
                sum=sum+i;
            }
        }
        printf("Case %d: %d\n",j,sum);
     }
return 0;
}
