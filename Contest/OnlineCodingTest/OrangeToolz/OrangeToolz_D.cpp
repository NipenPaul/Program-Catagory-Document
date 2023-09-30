/**
 * Approach: 
 * simple observation, a*b*c can max 1000000, so we can 
 * precalculation for all number divisor by divisor find
 * algoritm that's complexity O(n*log(n)).
 * 
 * after that, we can just 3 loop apply and calculation
 * all divisor and ans mod
 * 
 * Complexity
 * Time complexity: O(a*b*c*log2(a*b*c))
 * Space complexity: O(a*b*c)
 **/

#include <bits/stdc++.h>
using namespace std;

const int lim = 1e6;
const int MOD = 1073741824;

int cnt[lim+2];

void calculationDivisor(){
  for(int i = 1; i <= lim; i++){
    for(int j = i;  j <= lim; j += i){
      cnt[j]++;
    }
  }
}

void solution(){
  calculationDivisor();
  int a, b, c; scanf("%d %d %d", &a, &b, &c);
  int ans = 0;
  for(int i = 1; i <= a; i++){
    for(int j = 1; j <= b; j++){
      for(int k = 1; k <= c; k++){
        int m = i*j*k;
        ans = (ans + cnt[m]) % MOD;
      }
    }
  }
  printf("%d\n", ans);
}
int main(){
  //ios::sync_with_stdio(false);cin.tie(nullptr);
  int testCase = 1; //cin >> testCase;
  while(testCase--){
    solution();
  }
  return 0;
}