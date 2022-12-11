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
    int mx = INT_MIN;
    int maxPathSum(TreeNode* root) {
        dfs(root);
        return mx;
    }
    
    int dfs(TreeNode* root){
        if(root == nullptr){
            return 0;
        }
        int l = dfs(root->left);
        l = max(l, 0);
        int r = dfs(root->right);
        r = max(r, 0);
        mx = max(mx, l+r+root->val);
        return max(l+root->val, r+root->val);
    }
};
