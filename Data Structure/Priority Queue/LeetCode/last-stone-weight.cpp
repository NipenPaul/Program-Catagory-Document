class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> que;
        for(int &x: stones){
            que.push(x);
        }
        while(que.size() > 1){
            int y = que.top();
            que.pop();
            int x = que.top();
            que.pop();
            if(y > x){
                que.push(y-x);
            }
        }
        if(que.empty()) return 0;
        return que.top();
    }
};
