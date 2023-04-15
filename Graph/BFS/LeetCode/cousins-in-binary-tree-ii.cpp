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
    TreeNode* replaceValueInTree(TreeNode* root) {
        return bfs(root);
    }
    TreeNode* bfs(TreeNode* root){
        queue<TreeNode*> que;
        que.push(root);
        int ans = root->val;
        while(!que.empty()){
            int sz = que.size();
            int sum = 0;
            for(int i = 0; i < sz; i++){
                auto p = que.front();
                que.pop();
               // cout << p->val << " ";
                p->val = ans - p->val;
                if(p->left){
                    que.push(p->left);
                    sum += p->left->val;
                }
                if(p->right){
                    que.push(p->right);
                    sum += p->right->val;
                }
                if(p->left && p->right){
                    int x = p->left->val + p->right->val;
                    //cout << x << endl;
                    p->left->val = x;
                    p->right->val = x;
                }
            }
            ans = sum;
        }
        return root;
    }
};
