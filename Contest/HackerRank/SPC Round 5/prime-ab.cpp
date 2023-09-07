#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t; scanf("%d", &t);
    while(t--){
        long long int a, b;
        scanf("%lld%lld", &a, &b);
        long long int ab = a*b, i;
        int ok = 0;
        for(i = 2; i*i <= ab; i++){
            if(ab % i == 0){
                printf("0\n");
                ok = 1;
                break;
            }
        }
        if(ab == 1 || ab == 0){
            printf("0\n");
        }
        else if(ok == 0){
            printf("1\n");
        }
    }
    return 0;
}
