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
    char ph[10][100];///two dimensional array for web site
    int in[10];///count web rank
    int a,i,temp,p;
    scanf("%d",&a);
    for(p=1;p<=a;p++){
    scanf("%s%d",&ph[0],&in[0]);///string ar jono row dite lege colum dite hoyna
    temp=in[0];///frist web site ar rank ar jono
    for(i=1;i<10;i++){
      scanf("%s%d",&ph[i],&in[i]);
      if(in[i]>temp){
          temp=in[i];///higst rank stor korar jono
      }
    }
    printf("Case #%d:\n",p);///out put ar jono
    for(i=0;i<10;i++){
        if(temp==in[i]){
            printf("%s\n",ph[i]);
        }
      }
    }
  return 0;
}


