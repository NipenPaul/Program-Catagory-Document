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
    int i,t,j,temp,n,m,ct1=0,ct2=0;
    int aray[10];
     printf("Lumberjacks:\n");
     scanf("%d",&n);
     for(m=1;m<=n;m++)
     {
        for(i=0;i<10;i++)
        {
          scanf("%d",&aray[i]);
        }
        for(i=0;i<10;i++){
            for(j=i+1;j<10;j++){
                if(aray[i]>aray[j])
                {
                   ct1++;
                }
                if(aray[i]<aray[j])
                {
                   ct2++;
                }
            }
        }
          if(ct1==0||ct2==0){
            printf("Ordered\n");
          }else{
            printf("Unordered\n");
          }
        ct1=0;
        ct2=0;
    }
return 0;
}


