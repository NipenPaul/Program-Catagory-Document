class Solution {
public:
    long long maxScore(vector<int>& nums1, vector<int>& nums2, int k) {
        int n = nums1.size();
        vector<vector<int>> vec(n, vector<int>(2));
        for(int i = 0; i < n; i++){
            vec[i][0] = nums2[i];
            vec[i][1] = nums1[i];
        }
        sort(vec.begin(), vec.end(),[](const vector<int>&a, const vector<int>&b){
            return b[0] < a[0];
        });
        priority_queue<int, vector<int>, greater<int>> pq;
        long long res = 0, sum = 0;
        for(const vector<int>&v: vec){
            pq.push(v[1]);
            sum += v[1];
            if(pq.size() > k){
                sum -= pq.top();
                pq.pop();
            }
            if(pq.size() == k){
                res = max(res, sum*v[0]);
            }
        }
        return res;
    }
};
