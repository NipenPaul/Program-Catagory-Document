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
    int maxLevelSum(TreeNode* root) {
        return bfs(root);
    }
    int bfs(TreeNode* root){
        queue<TreeNode*> que;
        que.push(root);
        int mx = root->val;
        int k = 0;
        int ind = 1;
        while(!que.empty()){
            int sz = que.size();
            k++;
            int sum = 0;
            for(int i = 0; i < sz; i++){
                TreeNode* u = que.front();
                sum += u->val;
                que.pop();
                if(u->left){
                    que.push(u->left);
                }
                if(u->right){
                    que.push(u->right);
                }
            }
            if(mx < sum){
                mx = sum;
                ind = k;
            }
        }
        return ind;
    }
};
