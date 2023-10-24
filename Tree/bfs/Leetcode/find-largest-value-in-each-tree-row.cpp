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
    vector<int> largestValues(TreeNode* root) {
        return bfs(root);
    }
    vector<int> bfs(TreeNode* root){
        vector<int> ans;
        if(root == nullptr) return ans;
        queue<TreeNode*> que;
        que.push(root);
        while(!que.empty()){
            int sz = que.size();
            int mx = INT_MIN;
            for(int i = 0; i < sz; i++){
                TreeNode* node = que.front();
                if(mx < node->val) mx = node->val;
                que.pop();
                if(node->left){
                    que.push(node->left);
                }
                if(node->right){
                    que.push(node->right);
                }
            }
            ans.push_back(mx);
        }
        return ans;
    }
};