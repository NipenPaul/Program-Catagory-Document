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
    int j=0;
    char str[100];
    while(gets(str)){
    int n=strlen(str);
    for(int i=0;i<n;i++)
    {
        if(str[i]=='"')
        {
            j++;
            if(j==1)
            {
                str[i]=96;
            }
            else
            {
                j=0;
                str[i]=39;
            }
            printf("%c",str[i]);
        }
        printf("%c",str[i]);
    }
    printf("\n");
    }
    return 0;
}
