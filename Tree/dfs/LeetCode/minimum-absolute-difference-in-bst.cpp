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
    int mn = 1e9;
    vector<int> vec;
    int getMinimumDifference(TreeNode* root) {
        dfs(root);
        sort(vec.begin(), vec.end());
        for(int i = 1; i < vec.size(); i++){
            mn = min(mn, vec[i]-vec[i-1]);
        }
        return mn;
    }
    void dfs(TreeNode* root){
        if(root == nullptr) return;
        vec.push_back(root->val);
        dfs(root->left);
        dfs(root->right);
    }
};
