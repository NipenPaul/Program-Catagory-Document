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
    bool ok = true;
    bool isEvenOddTree(TreeNode* root) {
        bfs(root);
        return ok;
    }

    void bfs(TreeNode* root){
        if(root == nullptr) return;
        queue<TreeNode*> que;
        que.push(root);
        int level = 0;
        while(!que.empty()){
            int sz = que.size();
            vector<int> vec;
            for(int i = 0; i < sz; i++){
                TreeNode* node = que.front();
                que.pop();
                vec.push_back(node->val);
                if(node->left){
                    que.push(node->left);
                }
                if(node->right){
                    que.push(node->right);
                }
            }
            for(int &x: vec){
                cout << x << " ";
            }
            cout << endl;
            if(level & 1){
                for(int i = 0; i < vec.size()-1; i++){
                    if(vec[i] <= vec[i+1] || (vec[i] & 1)){
                        ok = false;
                        return;
                    }
                }
                if(vec[vec.size()-1] & 1){
                    ok = false;
                    return;
                }
            }else{
                for(int i = 0; i < vec.size()-1; i++){
                    if(vec[i] >= vec[i+1] || !(vec[i] & 1)){
                        ok = false;
                        return;
                    }
                }
                if(!(vec[vec.size()-1] & 1)){
                    ok = false;
                    return;
                }
            }
            level++;
        }
    }
};