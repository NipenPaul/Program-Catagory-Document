class Solution {
public:
    int minimumSum(int n, int k) {
        vector<int> v;
        v.push_back(1);
        for(int i = 2; ; i++){
            bool ok = true;
            for(int &x: v){
                if(i+x == k){
                    ok = false;
                    break;
                }
            }
            if(v.size() == n) break;
            if(ok){
                v.push_back(i);
            }
        }
        int sum = 0;
        for(int &x: v){
            sum += x;
        }
        return sum;
    }
};
