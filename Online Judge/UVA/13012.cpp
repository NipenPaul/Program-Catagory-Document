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
    int T,A,B,C,D,E,ct;
    while(scanf("%d%d%d%d%d%d",&T,&A,&B,&C,&D,&E)==6){
        ct=0;
    if(T==A){
        ct++;
    }
    if(T==B){
        ct++;
    }
    if(T==C){
        ct++;
    }
    if(T==D){
        ct++;
    }
    if(T==E){
        ct++;
    }
    cout<<ct<<"\n";
    }
    return 0;
}
