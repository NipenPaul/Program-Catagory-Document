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
    int a,b;
    while(scanf("%d%d",&a,&b)==2){
    if(a<0||b<0){
        break;
    }
    else if(a>b){
        int c,t,count;
      count=a-b;
      c=100+b;
      t=c-a;;
      if(count>t){
          printf("%d\n",t);
      }
      else{
          printf("%d\n",count);
      }
    }
    else if(a<b){
        int m,n;
        m=b-a;
        n=100+a;
        n-=b;
        if(m>n){
            printf("%d\n",n);
        }
        else{
            printf("%d\n",m);
        }
    }
    else{
        printf("%d\n",0);
    }

    }
    return 0;
}

