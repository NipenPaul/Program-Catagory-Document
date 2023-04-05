class Solution {
public:
    int miceAndCheese(vector<int>& reward1, vector<int>& reward2, int k) {
        priority_queue<pair<int,int>> pq;
        for(int i = 0; i < reward1.size(); i++){
            pq.push({reward1[i]-reward2[i], i});
        }
        int sum = 0;
        for(int &x: reward2) sum += x;
        while(k--){
            int ind = pq.top().second;
            pq.pop();
            sum -= reward2[ind];
            sum += reward1[ind];
        }
        return sum;
    }
};
