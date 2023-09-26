class Solution {
public:
    string removeDuplicateLetters(string s) {
        stack<char> st;
        int n = s.size();
        vector<int> vis(26, 0);
        vector<int> cnt(26, 0);
        for(int i = 0; i < n; i++){
            cnt[s[i]-'a']++;
        }
        for(int i = 0; i < n; i++){
            if(vis[s[i]-'a']){
                cnt[s[i]-'a']--;
                continue;
            }
            while(!st.empty() && st.top() > s[i] && cnt[st.top()-'a'] > 0){
                vis[st.top()-'a'] = 0;
                st.pop();
            }
            st.push(s[i]);
            vis[s[i]-'a'] = 1;
            cnt[s[i]-'a']--;
        }
        string ans = "";
        while(!st.empty()){
            ans += st.top();
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};