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
    int len,i,n,j,t,v=0;
    char word[101];
    while(1){
   scanf("%d",&n);
    if(n==0)
    {
        break;
    }
    scanf("%s",word);
    len=strlen(word);
    t=len/n;
    for(j=t-1;j<len;j+=t)
    {
        for(i=j;i>=0+v;i--)
        {
            printf("%c",word[i]);
        }
        v+=t;
    }
     printf("\n");
     v=0;
    }
        return 0;
    }

