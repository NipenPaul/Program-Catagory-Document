class Solution {
public:
    int minFlips(int a, int b, int c) {
        vector<int> va(31, 0), vb(31, 0), vc(31, 0);
        toBinary(a, va);
        toBinary(b, vb);
        toBinary(c, vc);
        int ans = 0;
        for(int i = 0; i < 31; i++){
            if(vc[i] == 0){
                if(va[i] == 1) ans++;
                if(vb[i] == 1) ans++;
            }else if(vc[i] == 1){
                if(va[i] == 0 && vb[i] == 0){
                    ans++;
                }
            }
        }
        return ans;
    }
    void toBinary(int n, vector<int>&v){
        int i = 0;
        while(n > 0){
            v[i] = n % 2;
            n /= 2;
            i++;
        }
    }
};
