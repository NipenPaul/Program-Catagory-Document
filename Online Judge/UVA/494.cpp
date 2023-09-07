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
    char c[1000];
    int a,i,counts;
    while(gets(c)){
         a=strlen(c);
         counts=0;
         for(i=0;i<a;i++)
         {
             if(isalpha(c[i])&&!isalpha(c[i+1]))
             {
                 counts++;
             }
         }
         printf("%d\n",counts);
    }
    return 0;
}
