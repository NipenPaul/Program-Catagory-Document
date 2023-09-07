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
    int a,b,c,i;
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        scanf("%d%d",&b,&c);
        if(b<0||c<0){
            break;
        }
        else if(b>=c&&(b+c)%2==0){
            int x,y;
            x=(b+c)/2;
            y=(b-c)/2;
            printf("%d %d\n",x,y);
        }
        else{
            printf("impossible\n");
        }
    }
  return 0;
}

