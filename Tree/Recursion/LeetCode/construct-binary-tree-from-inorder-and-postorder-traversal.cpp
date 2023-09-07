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
    TreeNode* buildTree(vector<int>& in, vector<int>& post) {
        int i = post.size()-1;
        return rec(i, in, post, 0, in.size()-1);
    }
    TreeNode* rec(int &i, vector<int>& in, vector<int>& post, int l, int r){
        if(l > r) return nullptr;
        int x = r;
        while(post[i] != in[x]){
            x--;
        }
        i--;
        TreeNode* root = new TreeNode(in[x]);
        root->right = rec(i, in, post, x+1, r);
        root->left = rec(i, in, post, l, x-1);
        return root;
    }
};
