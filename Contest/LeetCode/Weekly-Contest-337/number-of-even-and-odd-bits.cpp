class Solution {
public:
    vector<int> evenOddBit(int n) {
        
        vector<int> v;
        while(n != 0){
            v.push_back(n % 2);
            n /= 2;
        }
        vector<int> ans(2, 0);
        for(int i = 0; i < v.size(); i++){
            if(i % 2 == 0 && v[i]){
                ans[0]++;
            }else if(v[i]) ans[1]++;
        }
        return ans;
    }
};
