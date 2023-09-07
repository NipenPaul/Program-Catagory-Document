class Solution {
public:
    string reorganizeString(string s) {
        vector<int> cnt(26, 0);
        for(char &c: s){
            cnt[c-'a']++;
        }
        priority_queue<vector<int>> pq;
        for(int i = 0; i < 26; i++){
            if(cnt[i] > 0){
                pq.push(vector<int>{cnt[i], i+'a'});
            }
        }
        string ans;
        while(!pq.empty()){
            auto x = pq.top();
            pq.pop();
            if(ans.empty() || x[1] != ans.back()){
                ans += char(x[1]);
                x[0]--;
                if(x[0] > 0){
                    pq.push(x);
                }
            }else{
                if(pq.empty()){
                    return "";
                }
                auto y = pq.top();
                pq.pop();
                ans += char(y[1]);
                y[0]--;
                if(y[0] > 0){
                    pq.push(y);
                }
                pq.push(x);
            }
        }
        return ans;
    }
};
