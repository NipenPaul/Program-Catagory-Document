// Here, I applied greedy approach

// class Solution {
// public:
//     int findLongestChain(vector<vector<int>>& pairs) {
//         int cnt = 1;
//         sort(pairs.begin(), pairs.end(), [&](const auto &a, const auto &b){
//             if(a[0] == b[0]){
//                 return a[1] < b[1];
//             }
//             return a[0] < b[0];
//         });
//         // for(auto &it: pairs){
//         //     cout << it[0] << ", " << it[1] << endl;
//         // }
//         int mn = pairs[0][1];
//         for(int i = 1; i < pairs.size(); i++){
//             if(mn < pairs[i][0]){
//                 cnt++;
//                 mn = pairs[i][1];
//             }
//             mn = min(pairs[i][1], mn);
//         }
//         return cnt;
//     }
// };

// Here, I used Iterative dynamic programming approach...

// class Solution {
// public:
//     int findLongestChain(vector<vector<int>>& pairs) {
//         int cnt = 1;
//         sort(pairs.begin(), pairs.end());
//         int n = pairs.size();
//         vector<int> dp(n+1, 1);
//         for(int i = n-1; i >= 0; i--){
//             for(int j = i+1; j < n; j++){
//                 if(pairs[i][1] < pairs[j][0])
//                     dp[i] = max(dp[i], 1+dp[j]);
//             }
//             cnt = max(cnt, dp[i]);
//         }
//         return cnt;
//     }
// };


// Here, I used recursion dynamic programming approach..I also used lambda function for recursion..

class Solution {
public:
    int findLongestChain(vector<vector<int>>& pairs) {
        int cnt = 1;
        // used sort default function for sorting array..
        sort(pairs.begin(), pairs.end());
        int n = pairs.size();
        vector<int> dp(n+1, -1);
        // this the lamda recursion function
        function<int(int)> rec = [&](int i)->int{
            // I Checked index which has before come or not
            if(dp[i] != -1) return dp[i];
            dp[i] = 1;
            for(int j = i+1; j < n; j++){
                // here, I checked every index i and j were condition satisfy or not.
                if(pairs[i][1] < pairs[j][0]){
                    dp[i] = max(dp[i], 1+rec(j));
                }
            }
            return dp[i];
        };
        for(int i = 0; i < n; i++){
            // here I did call recursion function for all index and find the which one has given maximum answer... 
            cnt = max(cnt, rec(i));
        }
        return cnt;
    }
};
