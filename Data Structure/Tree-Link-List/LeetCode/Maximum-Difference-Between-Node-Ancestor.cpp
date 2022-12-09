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
    int mx;
    multiset<int> mse;
    int maxAncestorDiff(TreeNode* root) {
        mx = 0;
        dfs(root);
        return mx;
    }
    void dfs(TreeNode* root){
        if(root == nullptr){ 
            mx = max(*mse.rbegin() - *mse.begin(), mx);
            //for(int x: mse) cout << x << " ";
            //cout << endl;
          return;
        }
        mse.insert(root->val);
        dfs(root->left);
        dfs(root->right);
        mse.erase(mse.find(root->val));
    }
};
