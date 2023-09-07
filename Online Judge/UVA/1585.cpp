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
    int i,t;
    char ch[80];
    scanf("%d%*c",&t);
    for(i=1;i<=t;i++)
    {
        int l,j,sum=0,ans=0;
        gets(ch);
        l=strlen(ch);
        for(j=0;j<l;j++)
        {
            if(ch[j]=='O')
            {
                ans++;
            }else{
                ans=0;
            }
            sum=sum+ans;
        }
        printf("%d\n",sum);
    }
    return 0;
}
