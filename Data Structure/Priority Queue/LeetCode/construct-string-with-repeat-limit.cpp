class Solution {
public:
    string repeatLimitedString(string s, int repeatLimit) {
        priority_queue<pair<int, int>> pq;
        vector<int> cnt(26, 0);
        for(char c: s) {
            cnt[c - 'a']++;
        }

        for(int i = 0; i < 26; i++) {
            if (cnt[i] > 0) {
                //cout << i << " " << cnt[i] << endl;
                pq.push({i, cnt[i]});
            }
        }

        string ans = "";
        while(!pq.empty()) {
            int len = pq.top().second;
            int val = pq.top().first;
            int mn = min(repeatLimit, len);
            for(int i = 0; i < mn; i++){
                char c = 'a' + val;
                ans += c;
            }
            pq.pop();
           // cout << val << " " << len << " " << mn << endl;
            if(mn < len) {
                //cout << val << endl;
                if(!pq.empty()) {
                    int val2 = pq.top().first;
                    int len2 = pq.top().second;
                    char c = 'a' + val2;
                    ans += c;
                    len2--;
                    pq.pop();
                    if(len2 > 0){
                     pq.push({val2, len2});
                    //cout << val2 << " " << len2 << endl;
                    }
                }else{
                    break;
                }

                pq.push({val, len-mn});
            }
        }
        return ans;
    }
};