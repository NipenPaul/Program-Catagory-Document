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
    int n,i;
    while(scanf("%d",&n)==1){
            int sum=0;
        if(n==0){
            return 0;
        }else{
        for(i=1;i<=n;i++){
             sum=sum+i*i;
           }
       printf("%d\n",sum);
        }
    }
  return 0;
}

