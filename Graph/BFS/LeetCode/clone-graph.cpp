/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    unordered_map<Node*, Node*> mp;
    Node* cloneGraph(Node* node) {
        if(node == nullptr) return nullptr;
        Node* first = new Node(node->val, {});
        mp[node] = first;
        queue<Node*> que;
        que.push(node);
        while(!que.empty()){
            Node* tem = que.front();
            que.pop();
            for(auto adj: tem->neighbors){
                if(mp.find(adj) == mp.end()){
                    que.push(adj);
                    mp[adj] = new Node(adj->val, {});
                }
                mp[tem]->neighbors.push_back(mp[adj]);
            }
        }
       return mp[node]; 
    }
};
