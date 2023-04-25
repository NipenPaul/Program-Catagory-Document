/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<TreeNode*> allPossibleFBT(int n) {
        vector<TreeNode*> ans;
        unordered_map<int, vector<TreeNode*>> dp;
        rec(n, ans, dp);
        return ans;
    }
    void rec(int n, vector<TreeNode*>&ans, unordered_map<int, vector<TreeNode*>>&dp){
        if(dp.find(n) != dp.end()){
            ans = dp[n];
            return;
        }
        if(n < 1 || n % 2 == 0){
            dp[n] = ans;
            return;
        }
        if(n == 1){
            ans.push_back(new TreeNode());
            dp[n] = ans;
            return;
        }
        for(int i = 1; i < n; i += 2){
            int l = i;
            int r = n-i-1;
            vector<TreeNode*> left, right;
            rec(i, left, dp); rec(r, right, dp);
            for(int j = 0; j < left.size(); j++){
                for(int k = 0; k < right.size(); k++){
                    ans.push_back(new TreeNode(0, left[j], right[k]));
                }
            }
        }
        dp[n] = ans;
    }
};
