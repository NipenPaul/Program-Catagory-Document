class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int> st;
        int j = 0;
        for(int i = 0; i < popped.size(); i++){
            if(!st.empty() && st.top() == popped[i]){
                st.pop();
                continue;
            }
            while(j < pushed.size() && popped[i] != pushed[j]){
                st.push(pushed[j]);
                j++;
            }
            if(j < pushed.size()){
                st.push(pushed[j]);
                j++;
            }
            cout << endl;
            if(!st.empty() && st.top() == popped[i]){
                st.pop();
            }
        }
        if(st.empty()) return true;
        return false;
    }
};
