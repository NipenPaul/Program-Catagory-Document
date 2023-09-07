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
int main(){
    int a,j=0,count=0;
    while(scanf("%d",&a)==1)
    {
        if(a<=0)
        {
            break;
        }
        else
        {
            j++;
            for(int i=1;i<a;i*=2)
            {
                count++;
            }
            printf("Case %d: %d\n",j,count);
            count=0;
        }
    }
return 0;
}
