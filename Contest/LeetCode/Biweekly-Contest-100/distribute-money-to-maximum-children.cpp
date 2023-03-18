class Solution {
public:
    int distMoney(int money, int children) {
        if(money < children){
            return -1;
        }
        vector<int> v(children, 1);
        money -= children;
        for(int i = 0; i < children; i++){
            if(money >= 7){
                v[i] += 7;
                money -= 7;
            }
        }
        int ans = 0, ct = 0;
        for(int i  = 0; i < children; i++){
            if(v[i] == 8) ans++;
            else ct++;
        }
        if(ct == 1 && money == 3){
            ans--;
        }else if(ct == 0 && money){
            ans--;
        }
        return max(ans, 0);
    }
};
