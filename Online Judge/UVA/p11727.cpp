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
    int a,b,c,t,i,n;
     scanf("%d",&t);
       for(i=1;i<=t;i++)
          {

        scanf("%d %d %d",&a,&b,&c);

            if(a<b&&a<c&&b<c)
              {

            printf("Case %d: %d\n",i,b);

              }
             else if(b<a&&b<c&&a<c)
               {

             printf("Case %d: %d\n",i,a);
                 }
             else if(a>b&&a>c&&b>c)
               {
            printf("Case %d: %d\n",i,b);
             }
             else if(a<b&&a>c&&b>c)
             {
                  printf("Case %d: %d\n",i,a);

             }

         else{

            printf("Case %d: %d\n",i,c);

             }
        }
    return 0;
}
