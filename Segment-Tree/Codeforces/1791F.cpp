#include <bits/stdc++.h>
using namespace std;
#define CHECK(x)cout<<(#x)<<" is "<<(x)<<'\n';
#define int long long
const int N = (int)2e5+2;
struct info {
    int prop, sum;
} tree[N * 4]; //sum and extra update value added prop
void update(int node, int b, int e, int i, int j, int x)
{
    if (i > e || j < b)
        return;
    if (b >= i && e <= j) //Full range interset
    {
        tree[node].sum += ((e - b + 1) * x); //all down node e-b+1, so,  (e-b+1) * x added.
        tree[node].prop += x; //all down node sum with x
        return;
    }
    int Left = node * 2;
    int Right = (node * 2) + 1;
    int mid = (b + e) / 2;
    update(Left, b, mid, i, j, x);
    update(Right, mid + 1, e, i, j, x);
    tree[node].sum = tree[Left].sum + tree[Right].sum + (e - b + 1) * tree[node].prop;
    //up all node added with prop value
    // left and right node sum + extra summation
}
int query(int node, int b, int e, int i, int j, int carry = 0)
{
    if (i > e || j < b)
        return 0;

    if (b >= i and e <= j)
        return tree[node].sum + carry * (e - b + 1); //sum + extra value
    int Left = node * 2;
    int Right = (node * 2) + 1;
    int mid = (b + e) / 2;

    int p1 = query(Left, b, mid, i, j, carry + tree[node].prop); //prop value + carray
    int p2 = query(Right, mid + 1, e, i, j, carry + tree[node].prop);

    return p1 + p2;
}
void solution(){
  int n, q; cin >> n >> q;
  vector<int> v(n+1);
  for(int i = 1; i <= n; i++){
    cin >> v[i];
  }
  for(int i = 1; i <= 4*n; i++){
    tree[i].sum = tree[i].prop = 0;
  }
  while(q--){
    int t; cin >> t;
    if(t == 1){
      int l, r; cin >> l >> r;
      update(1, 1, n, l, r, 1);
    }else{
      int ind; cin >> ind;
      int cnt = query(1, 1, n, ind, ind);
      int x = v[ind];
      while(cnt > 0 && x > 9){
        cnt--;
        int add = 0;
        while(x > 0){
          add += (x % 10);
          x /= 10;
        }
        x = add;
      }
      cout << x << '\n';
    }
  }
}
int32_t main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t = 1;
  cin >> t;
  while(t--){
    solution();
  }
}
