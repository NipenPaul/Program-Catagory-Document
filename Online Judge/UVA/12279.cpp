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
    int n,value,i,j=0;;
    while(scanf("%d",&n)==1){
            int ct1=0,ct2=0,sub;
        if(n==0){
            return 0;
        }else{
            j++;
        for(i=0;i<n;i++){
            scanf("%d",&value);
            if(value==0){
                ct1++;
            }else{
             ct2++;
            }
        }
        sub=ct2-ct1;
        printf("Case %d: %d\n",j,sub);
        }
    }
  return 0;
}
