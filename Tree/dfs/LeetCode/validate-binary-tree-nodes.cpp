class Solution {
public:
    bool validateBinaryTreeNodes(int n, vector<int>& leftChild, vector<int>& rightChild) {
        int root = findRoot(n, leftChild, rightChild);
        if(root == -1){
            return false;
        }
        unordered_set<int> vis;
        stack<int> st;
        vis.insert(root);
        st.push(root);
        while(!st.empty()){
            int node = st.top();
            st.pop();
            int childs[] = {leftChild[node], rightChild[node]};
            for(int child: childs){
                if(child != -1){
                    if(vis.find(child) != vis.end()){
                        return false;
                    }
                    st.push(child);
                    vis.insert(child);
                }
            }
        }
        return vis.size() == n;
    }
     int findRoot(int n, vector<int>& left, vector<int>& right) {
      unordered_set<int> child;
      child.insert(left.begin(), left.end()); 
      child.insert(right.begin(), right.end());

      for(int i = 0; i < n; i++){
          if(child.find(i) == child.end()){
              return i;
          }
      } 
      return -1;
    }
};