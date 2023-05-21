class Solution {
public:
    int punishmentNumber(int n){
        int sum = 0;
        for(int i = 1; i <= n; i++){
            string s = to_string(i*i);
            if(rec(s, i, 0, 0)){
                sum += (i*i);
            }
        }
        return sum;
    }
    bool rec(string &s, int k, int ind, int sum){
        if(ind >= s.size()){
            return sum == k;
        }
        int num = 0;
        for(int i = ind; i < s.size(); i++){
            num = num * 10+ (s[i]-'0');
            if(rec(s, k, i+1, sum+num)){
                return true;
            }
        }
        return false;
    }
};
