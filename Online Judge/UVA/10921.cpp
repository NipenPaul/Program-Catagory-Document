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
    int a,b,c;
    char ch[30];
    while(gets(ch))
    {
    a=strlen(ch);
    for(int i=0;i<a;i++)
    {
        if(ch[i]=='1')
        {
            ch[i]='1';
        }
        else if(ch[i]=='A'||ch[i]=='B'||ch[i]=='C')
        {
            ch[i]='2';
        }
        else if(ch[i]=='D'||ch[i]=='E'||ch[i]=='F')
        {
            ch[i]='3';
        }
        else if(ch[i]=='G'||ch[i]=='H'||ch[i]=='I')
        {
            ch[i]='4';
        }
        else if(ch[i]=='J'||ch[i]=='K'||ch[i]=='L')
        {
            ch[i]='5';
        }
        else if(ch[i]=='M'||ch[i]=='N'||ch[i]=='O')
        {
            ch[i]='6';
        }
        else if(ch[i]=='P'||ch[i]=='Q'||ch[i]=='R'||ch[i]=='S')
        {
            ch[i]='7';
        }
        else if(ch[i]=='T'||ch[i]=='U'||ch[i]=='V')
        {
            ch[i]='8';
        }
        else if(ch[i]=='W'||ch[i]=='X'||ch[i]=='Y'||ch[i]=='Z')
        {
            ch[i]='9';
        }
        else if(ch[i]=='0')
        {
            ch[i]='0';
        }
        printf("%c",ch[i]);
    }
    printf("\n");
    }
    return 0;
}
