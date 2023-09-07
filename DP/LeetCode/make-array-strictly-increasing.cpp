class Solution {
public:
    int makeArrayIncreasing(vector<int>& arr1, vector<int>& arr2) {
        sort(arr2.begin(), arr2.end());
        map<pair<int, int>, int> dp;

        // Binary Search for value in arr2
        function<int(int)> binSearch = [&](int x)->int{
            int left = 0, right = arr2.size();
            while(left < right){
                int mid = (left+right) / 2;
                if(arr2[mid] <= x){
                    left = mid+1;
                }else{
                    right = mid;
                }
            }
            return left;
        };

        // Recursive for all index at a time take or not take then return minimum answer
        function<int(int, int)> dfs = [&](int i, int prev) ->int{
            if(i == arr1.size()) return 0;
            if(dp.find({i, prev}) != dp.end()){
                return dp[{i, prev}];
            }
            int cost = 2e3+1;
            if(arr1[i] > prev){
                cost = dfs(i+1, arr1[i]);
            }
            int ind = binSearch(prev);
            if(ind < arr2.size()){
                cost = min(cost, 1+dfs(i+1, arr2[ind]));
            }
            return dp[{i, prev}] = cost;
        };

        int ans = dfs(0, -1);
        return ans < 2e3+1 ? ans : -1; 
    }
};
