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
     int n,i;
     scanf("%d",&n);
     for(i=1;i<=n;i++)
     {
     int pyear,pmonth,pday,byear,bmonth,bday,day,year,month;
     char ch;
     scanf("%d%c%d%c%d",&pday,&ch,&pmonth,&ch,&pyear);
     scanf("%d%c%d%c%d",&bday,&ch,&bmonth,&ch,&byear);

     if(pday>=bday)
    {
        day=pday-bday;

    }
    else
    {
     pday=30+pday;
     day=pday-bday;
     bmonth=1+bmonth;

    }

     if(pmonth>=bmonth)
    {
        month=pmonth-bmonth;

    }
    else
    {
     pmonth=12+pmonth;
     month=pmonth-bmonth;
     byear=1+byear;

    }

    if(pyear>=byear)
    {
        year=pyear-byear;

        if(year==0){
        printf("Case #%d: %d\n",i,year);
        }else if(year>130){
        printf("Case #%d: Check birth date\n",i);
        }else{
        printf("Case #%d: %d\n",i,year);
        }
    }
    else
    {
     printf("Case #%d: Invalid birth date\n",i);

    }

    }

     return 0;
 }
