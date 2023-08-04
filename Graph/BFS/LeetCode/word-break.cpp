class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        unordered_set<string> se(wordDict.begin(), wordDict.end());
        queue<int> que;
        vector<bool> vis(s.size(), false);
        que.push(0);
        while(!que.empty()){
            int start = que.front();
            que.pop();
            if(start == s.size()){
                return true;
            }
            for(int end = start+1; end <= s.size(); end++){
                if(!vis[end]){
                    if(se.find(s.substr(start, end-start)) != se.end()){
                        que.push(end);
                        vis[end] = true;
                    }
                }
            }
        }
        return false;
    }
};
