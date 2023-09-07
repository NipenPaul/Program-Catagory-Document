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
#include<iostream>
using namespace std;
int main()
{
   int a,i,j,t,temp,b,m,h=1;
   scanf("%d",&b);
   for(m=1;m<=b;m++){
   scanf("%d",&a);
   int aray[a];
   for(i=0;i<a;i++){
       scanf("%d",&aray[i]);
   }
   for(j=0;j<a;j++){
       for(t=j+1;t<a;t++)
       {
        if(aray[j]>aray[t]){
            temp=aray[j];
            aray[j]=aray[t];
            aray[t]=temp;
        }
      }
   }
   printf("Case %d: %d\n",h,aray[a-1]);
   h++;
   }
     return 0;
}




