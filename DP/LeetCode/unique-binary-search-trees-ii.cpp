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
    vector<TreeNode*> generateTrees(int n) {
        map<pair<int, int>, vector<TreeNode*>> dp;
        return rec(1, n, dp);
    }
    vector<TreeNode*> rec(int st, int en, map<pair<int, int>, vector<TreeNode*>>& dp){
        vector<TreeNode*> res;
        if(st > en){
            res.push_back(nullptr);
            return res;
        }
        if(dp.find({st, en}) != dp.end()){
            return dp[{st, en}];
        }
        for(int i = st; i <= en; i++){
            vector<TreeNode*> leftSubTrees = rec(st, i-1, dp);
            vector<TreeNode*> rightSubTrees = rec(i+1, en, dp);
            for(auto left: leftSubTrees){
                for(auto right: rightSubTrees){
                    TreeNode* root = new TreeNode(i, left, right);
                    res.push_back(root);
                }
            }
        }
        return dp[{st, en}] = res;
    }
};
