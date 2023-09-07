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
    int hour1,minute1,hour2,minute2,h,m,time;
    while(scanf("%d%d%d%d",&hour1,&minute1,&hour2,&minute2)==4)
    {
    if(hour1==0&&minute1==0&&hour2==0&&minute2==0){
        break;
    }
    h=(hour1*60)+minute1;
    m=(hour2*60)+minute2;
    if(h>m){
       time=(m+1440)-h;
      printf("%d\n",time);
    }
    else{
        time=m-h;
      printf("%d\n",time);
    }
    }
  return 0;
}
