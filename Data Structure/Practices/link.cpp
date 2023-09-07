//#include<bits/stdc++.h>

#include<stdio.h>
#include<malloc.h>

//using namespace std;

int main()
{
    int *p;
    p = (int *) malloc(sizeof(1));
    p[0] = 10;
    p[1] = 20;
    p[2] = 1;
    p[3] = 4;
    p[4] = 4;
    p[5] = 2;
    p[6] = 3;
    for(int i = 0; i < 7; i++)
    {
        //cout << p[i] << " ";
        printf("%d ", p[i]);
    }
    //cout << endl;
    return 0;
}
