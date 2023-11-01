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
    map<int, int> mp;
    int cnt = 0;
    vector<int> findMode(TreeNode* root) {
        dfs(root);
        vector<int> v;
        for(auto &[x, y]: mp){
            if(y == cnt){
                v.push_back(x);
            }
        }
        return v;
    }
    void dfs(TreeNode* node){
        if(node == nullptr) return;
        mp[node->val]++;
        if(cnt < mp[node->val]){
            cnt = mp[node->val];
        }
        dfs(node->left);
        dfs(node->right);
    }
};