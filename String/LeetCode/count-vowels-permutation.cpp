const int Mod = (int) 1e9+7;
typedef long long int ll;
class Solution {
public:
    int countVowelPermutation(int n) {
        ll a, e, i, o, u;
        a = e = i = o = u = 1;
        ll a2, e2, i2, o2, u2;
        for(int j = 2; j <= n; j++){
            a2 = (e + u + i) % Mod;
            e2 = (a + i) % Mod;
            i2 = (e + o) % Mod;
            o2 = i;
            u2 = (o + i) % Mod;
            a = a2, e = e2, i = i2, o = o2, u = u2;
        }
        return (a + e + i +  u + o) % Mod;
    }
};