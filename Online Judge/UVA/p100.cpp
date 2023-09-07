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
   int count,t,p,m,n,ty=1;
   while(scanf("%d%d",&m,&n)==2)
   {
       int temp_m=m;
       int temp_n=n;
    if(m>n)
    {
     swap(m,n);
    }
    t=m;
    p=n;
    while(t<=p){
    int n;
    count=1;
    n=t;
    t++;
    while(n!=1)
    {
    if(n%2!=0)
    {
        n=3*n+1;
        n=n/2;
        count+=2;
    }
    else
    {
        n=n/2;
        count++;
    }
    }
    if(count>ty){
        ty=count;
    }
    }
    printf("%d %d %d\n",temp_m,temp_n,ty);
    ty=0;
   }
  return 0;
}

