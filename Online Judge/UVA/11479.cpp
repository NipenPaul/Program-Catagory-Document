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
  signed long int a,b,c;
  int r=1,t,i;
  scanf("%d",&t);
  for(i=1;i<=t;i++)
  {
    scanf("%ld%ld%ld",&a,&b,&c);
    if(a<(b+c)&&b<(a+c)&&c<(a+b)){
       if(a==b&&b==c&&c==a){
          printf("Case %d: Equilateral\n",r);
      }
      else if(a!=b&&b!=c&&c!=a){
          printf("Case %d: Scalene\n",r);
      }
      else if(a==b||b==c||c==a){
          printf("Case %d: Isosceles\n",r);
      }
    }
  else{
        printf("Case %d: Invalid\n",r);
    }
     r++;
  }
   return 0;
}

