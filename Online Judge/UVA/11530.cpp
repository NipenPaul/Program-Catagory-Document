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
    int a,i=1,j,p,count=0,t=1;
    char ch[101];
    scanf("%d%*c",&a);
    for(i=1;i<=a;i++){
         gets(ch);
        int n=strlen(ch);
        for(j=0;j<n;j++)
        {
            char ph=ch[j];
            if(ph=='a'||ph=='d'||ph=='g'||ph=='j'||ph=='m'||ph=='p'||ph=='t'||ph=='w')
            {
                count+=1;
            }
            else if(ph=='b'||ph=='e'||ph=='h'||ph=='k'||ph=='n'||ph=='q'||ph=='u'||ph=='x')
            {
                count+=2;
            }
            else if(ph=='c'||ph=='f'||ph=='i'||ph=='l'||ph=='o'||ph=='r'||ph=='v'||ph=='y')
            {
                count+=3;
            }
            else if(ph=='s'||ph=='z'){
                count+=4;
            }
            else if(ph==' '){
                count+=1;
            }
       }
       printf("Case #%d: %d\n",t,count);
        t++;
        count=0;
    }
     return 0;
}




