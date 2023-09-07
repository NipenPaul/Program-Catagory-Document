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
  int n,m;

   scanf("%d\n",&n);
   for(m=1;m<=n;m++){
   char ch[20];
   int ln,i,j,a,sum=0,b,c,d,sum1=0,k,l,result=0;
   gets(ch);
   ln=strlen(ch);
   for(i=0;i<ln;i=i+2){
   if(ch[i]==' '){
   i++;
    j=ch[i]-48;
     a=j*2;
   if(a>9){
   b=a/10;
   c=a%10;
   d=b+c;
   sum=sum+d;

   }else{
   sum=sum+a;
   }
   }
   else{
   j=ch[i]-48;
   a=j*2;
   if(a>9){

   b=a/10;
   c=a%10;
   d=b+c;
   sum=sum+d;
   }else{
   sum=sum+a;
   }
   }
   }

   for(k=0;k<ln;k++){
   if(ch[k]==' '){
    k+=2;
    l=ch[k]-48;
    sum1=sum1+l;
    }else{
    k++;
     l=ch[k]-48;
     sum1=sum1+l;
    }
    }
    result=sum+sum1;
    if(result%10==0){
    printf("Valid\n");
    }else{
    printf("Invalid\n");
    }
  }
  return 0;
}

