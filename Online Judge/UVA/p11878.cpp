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
    int num1,num2,res,add,sub;
    char oper,equl,ch_r[4];
    int ct=0;
    while(scanf("%d%c%d%c%s",&num1,&oper,&num2,&equl,ch_r)==5){
    res=atoi(ch_r);
    if(oper=='+'){
     add=num1+num2;
     if(add==res){
        ct++;
     }
    }else{

        sub=num1-num2;
     if(sub==res){
        ct++;
     }
    }
    }
    printf("%d\n",ct);
    return 0;
}
