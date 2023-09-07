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
    int i,n,T1,T2,F,A,C1,C2,C3;
    int d,CT,total;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>T1>>T2>>F>>A>>C1>>C2>>C3;
        d=((C1<C2)&&(C1<C3)?C1:(C2<C3)?C2:C3);
        if(d==C1){
            CT=(C2+C3)/2;
        }else if(d==C2){
            CT=(C1+C3)/2;
        }else{
            CT=(C1+C2)/2;
        }
        total=(T1+T2+F+A+CT);

        if(total<60){
            cout<<"Case "<<i<<": F"<<endl;
        }else if(total>=60&&total<70){
            cout<<"Case "<<i<<": D"<<endl;
        }else if(total>=70&&total<80){
            cout<<"Case "<<i<<": C"<<endl;
        }else if(total>=80&&total<90){
            cout<<"Case "<<i<<": B"<<endl;
        }else{
          cout<<"Case "<<i<<": A"<<endl;
        }

    }
    return 0;
}

