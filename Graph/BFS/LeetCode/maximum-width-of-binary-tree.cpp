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
    int widthOfBinaryTree(TreeNode* root) {
        if(root == nullptr) return 0;
        return bfs(root);
    }
    int bfs(TreeNode* root){
        long long ans = 1;
        queue<pair<TreeNode*, long long>> que;
        que.push({root, 0});
        while(!que.empty()){
            int sz = que.size();
            long long a = 0, b = 0;
            int mn = que.front().second;
            for(int i = 0; i < sz; i++){
                auto p = que.front();
                que.pop();
                TreeNode* node = p.first;
                long long k = p.second-mn;
                if(i == 0){
                    a = k;
                }
                if(sz-1 == i){
                    b = k;
                }
                if(node->left){
                    que.push({node->left, 2*k+1});
                }
                if(node->right){
                    que.push({node->right, 2*k+2});
                }
            }
            ans = max(ans, b-a+1);
        }
        return ans;
    }
};
