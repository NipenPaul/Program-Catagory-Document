class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int> pq;
        for(int i = 0; i < piles.size(); i++){
            pq.push(piles[i]);
        }
        for(int i = 0; i < k; i++){
            int v = pq.top();
            pq.pop();
            v = (v + 1) / 2;
            pq.push(v);
        }
        int ans = 0;
        while(!pq.empty()){
            ans += pq.top();
            pq.pop();
        }
        return ans;
    }
};
