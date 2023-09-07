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
    int a,i,b,j,temp,sum=0,n;
    scanf("%d",&a);
    for(n=1;n<=a;n++){
    scanf("%d",&b);
    int aray[b];
    for(j=0;j<b;j++)
     {
         scanf("%d",&aray[j]);
     }
     for(i=0;i<b;i++){
        for(j=i+1;j<b;j++){
            if(aray[i]>aray[j])
            {
                temp=aray[i];
                aray[i]=aray[j];
                aray[j]=temp;
            }
         }
     }
  for(i=0;i<b-1;i++)
 {
  sum+=aray[i+1]-aray[i];
 }
printf("%d\n",sum*2);
sum=0;
}
return 0;
}
