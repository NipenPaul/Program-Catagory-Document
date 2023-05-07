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
    long long int x, sum;
    int sumNumbers(TreeNode* root) {
        x = sum = 0;
        dfs(root);
        return sum;
    }
    void dfs(TreeNode* r){
        if(r == nullptr){
            return;
        }
        x = x * 10 + r->val;
        dfs(r->left);
        dfs(r->right);
        if(r->left == nullptr && r->right == nullptr){
            sum += x;
            //cout << x << " ";
        }
        x /= 10;
    }
};
