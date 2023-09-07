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
#include<iostream>
using namespace std;
int main()
{
    char c[20];
    int a,i,counts,E;
    while(scanf("%s",&c)==1){
         a=strlen(c);
         counts=0;
         E=0;
         for(i=0;i<a;i++)
         {
             if(c[i]=='B'||c[i]=='F'||c[i]=='P'||c[i]=='V')
             {
                 if(E==1){
                 }else{
                 counts=1;
                 printf("%d",counts);
                 }
             }else if (c[i]=='C'||c[i]=='G'||c[i]=='J'||c[i]=='K'||c[i]=='Q'||c[i]=='S'||c[i]=='X'||c[i]=='Z'){
                 if(E==2){
                 }else{
                 counts=2;
                 printf("%d",counts);
                 }
             }else if (c[i]=='D'||c[i]=='T'){
                 if(E==3){
                 }else{
                 counts=3;
                 printf("%d",counts);
                 }
             }else if (c[i]=='L'){
                if(E==4){
                 }else{
                 counts=4;
                 printf("%d",counts);
                 }
             }else if (c[i]=='M'||c[i]=='N'){
                 if(E==5){
                 }else{
                 counts=5;
                 printf("%d",counts);
                 }
             }else if(c[i]=='R'){
                 if(E==6){
                 }else{
                 counts=6;
                 printf("%d",counts);
                 }
             }else{
                 counts=0;
             }
             E=counts;
         }
         printf("\n");
    }
    return 0;
}
