/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> vec[501];
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        dfs(root);
        /*for(int i = 0; i < 501; i++){
            cout << i << ": ";
            for(int j = 0; j < vec[i].size(); j++){
                cout << vec[i][j] << " ";
            }
            cout << endl;
        }*/
        return bfs(target->val, k);
    }
    void dfs(TreeNode* root){
        if(root == nullptr) return;
        if(root->left != nullptr){
            vec[root->val].push_back(root->left->val);
            vec[root->left->val].push_back(root->val);
            dfs(root->left);
        }
        if(root->right != nullptr){
            vec[root->val].push_back(root->right->val);
            vec[root->right->val].push_back(root->val);
            dfs(root->right);
        }
    }
    vector<int> bfs(int src, int k){
        vector<int> ans;
        vector<bool> vis(501, false);
        vector<int> len(501, 0);
        vis[src] = true;
        queue<int> que;
        que.push(src);
        if(k == 0){
            ans.push_back(src);
        }
        while(!que.empty()){
            int u = que.front();
            que.pop();
            for(int &v: vec[u]){
                if(!vis[v]){
                    vis[v] = true;
                    que.push(v);
                    len[v] = len[u]+1;
                    if(len[v] == k){
                        ans.push_back(v);
                    }
                }
            }
        }
        return ans;
    }
};
