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
    int ans = 0;
    int diameterOfBinaryTree(TreeNode* root) {
        dfs(root);
        return ans;
    }
    int dfs(TreeNode* root){
        if(root == nullptr) return 0;
        int l = 0, r = 0;
        if(root->left) {
            l = dfs(root->left) + 1;
        }
        if(root->right) {
            r = dfs(root->right) + 1;
        }
       // cout << root->val << ": ";
       // cout << l << " " << r << endl;

        ans = max(ans, l + r);
        return max(l, r);
    }
};