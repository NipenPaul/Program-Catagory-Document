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
        int i,j;
        char ch[20];
        while(gets(ch)){
        int in,in2,sum=0,f=0;
        int n=strlen(ch);
        for(j=0;j<n;j++)
        {
            if(ch[j]>='A'&&ch[j]<='Z'){
              in=ch[j];
              in2=in-38;
            }else if(ch[j]>='a'&&ch[j]<='z'){
              in=ch[j];
              in2=in-96;
            }
            sum=sum+in2;
        }

         if(sum==1 || sum==2   || sum==3)
        {
         printf("It is a prime word.\n");
        }else{

        for(i=2;i<sum;i++)
        {
            if(sum%i==0)
            {
                f=f+1;
            }
        }


        if(f==0)
        {
            printf("It is a prime word.\n");
        }
        else
        {
            printf("It is not a prime word.\n");
        }
        }

    }
     return 0;
}

