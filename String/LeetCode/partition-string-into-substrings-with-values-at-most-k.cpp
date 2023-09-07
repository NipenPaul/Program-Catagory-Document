class Solution {
public:
    int minimumPartition(string s, int k) {
        int ans = 0;
        long long int num = 0;
        for(int i = 0; i < s.size();){
            while(i < s.size() && num * 10 + (s[i]-'0') <= k){
                num = num * 10 + (s[i]-'0');
                i++;
            }
            if(i < s.size() && num == 0){
                return -1;
            }
            //cout << num << endl;
            ans++;
            num = 0;
        }
        return ans;
    }
};
