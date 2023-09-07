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

    long int n,a,b,c;
    while(scanf("%ld",&n)==1){
    if(n==0){
    return 0;
    }
    start:
    if(n>9){
       a=n/10;
       b=n%10;
       c=a+b;
       if(c>9)
       {
            n=c;
            goto start;
       }
       else{
            printf("%ld\n",c);
       }
    }
    else{
        printf("%ld\n",n);
    }
    }
  return 0;
}
