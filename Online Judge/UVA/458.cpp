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
    int a,b,i;
    char ch[50];
    while(gets(ch))
    {
        a=strlen(ch);
        for(i=0;i<a;i++)
        {
            b=ch[i];
            printf("%c",b-7);
        }
        printf("\n");
    }
    return 0;
}
