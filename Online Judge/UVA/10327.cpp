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
int a,i,t,j,temp;
while(scanf("%d",&a)!=EOF){
    int aray[a];
    for(i=0;i<a;i++)
    {
      scanf("%d",&aray[i]);
    }
    int count=0;
    for(i=0;i<a;i++){
        for(j=i+1;j<a;j++){
            if(aray[i]>aray[j])
            {
               count++;
            }
        }
    }
  printf("Minimum exchange operations : %d\n",count);
    count=0;
}
return 0;
}

