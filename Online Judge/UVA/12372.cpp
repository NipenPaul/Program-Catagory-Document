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
   int a,i;
   scanf("%d",&a);
    for(i=1;i<=a;i++){
        int b,c,e;
        scanf("%d%d%d",&b,&c,&e);
        if(b<=20&&c<=20&&e<=20){
          printf("Case %d: good\n",i);
        }
        else{
          printf("Case %d: bad\n",i);
        }
    }
    return 0;
}
