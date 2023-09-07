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
    int n,ct=0,d;
    while(scanf("%d",&n)==1){
            if(n==0){
                return 0;
            }
        if(n>=2&&n<=400){
            ct++;
            d=n/2;
            printf("Case %d: %d\n",ct,d);
        }

    }
    return 0;
}


