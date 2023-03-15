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
    bool isCompleteTree(TreeNode* root) {
        return bfs(root);
    }
    bool bfs(TreeNode* r){
        queue<TreeNode*> que;
        que.push(r);
        bool ok = false;
        while(!que.empty()){
            TreeNode* node = que.front();
            que.pop();
            if(node == nullptr){
                ok = true;
            }else{
                if(ok == true) return false;
                que.push(node->left);
                que.push(node->right);
            }
        }
        return true;
    }
};
