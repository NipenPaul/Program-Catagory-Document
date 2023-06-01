class Solution {
public:
    int kthFactor(int n, int k) {
        vector<int> vec;
        for(int i = 1; i*i <= n; i++){
            if(n % i == 0){
                vec.push_back(i);
                int d = n / i;
                if(i != d){
                    vec.push_back(d);
                }
            }
        }
        if(vec.size() < k) return -1;
        k--;
        sort(vec.begin(), vec.end());
        return vec[k];
    }
};
