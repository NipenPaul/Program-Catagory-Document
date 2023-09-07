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
    int a,i,t,j,temp,n,m;
     scanf("%d",&n);
     for(m=1;m<=n;m++)
     {
        int aray[50];
        scanf("%d",&a);
        for(i=0;i<a;i++)
        {
          scanf("%d",&aray[i]);
        }
        int ct=0;
        for(i=0;i<a;i++){
            for(j=i+1;j<a;j++){
                if(aray[i]>aray[j])
                {
                   ct++;
                }
            }
        }
      printf("Optimal train swapping takes %d swaps.\n",ct);
        ct=0;
}
return 0;
}


