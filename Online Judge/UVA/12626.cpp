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
    int x,i,j;
    char ch[1000];
    scanf("%d%*c",&x);
    for(i=1;i<=x;i++){
        int m=0,a=0,r=0,g=0,i=0,t=0;
        int M=1,A=3,R=2,G=1,I=1,T=1,ct=0;
         gets(ch);
        int n=strlen(ch);
        for(j=0;j<n;j++)
        {
            char ph=ch[j];
            if(ph=='M')
            {
                m+=1;
            }else if(ph=='A'){
                a+=1;
            }else if(ph=='R'){
                r+=1;
            }else if(ph=='G'){
                g+=1;
            }else if(ph=='I'){
                i+=1;
            }else if(ph=='T'){
                t+=1;
            }
       }
       start:
      if((m>=M)&&(a>=A)&&(r>=R)&&(g>=G)&&(i>=I)&&(t>=T)){
        ct++;
        m--;
        a-=3;
        r-=2;
        g--;
        i--;
        t--;
        goto start;
      }
      printf("%d\n",ct);

    }
     return 0;
}
