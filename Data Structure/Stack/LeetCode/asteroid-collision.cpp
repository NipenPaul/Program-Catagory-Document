class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;
        for(int &x: asteroids){
            bool ok = 1;
            while(!st.empty() && (st.top() > 0 && x < 0)){
                if(abs(st.top()) < abs(x)){
                    st.pop();
                    continue;
                }else if(abs(st.top()) == abs(x)){
                    st.pop();
                }
                ok = 0;
                break;
            }
            if(ok){
                st.push(x);
            }
        }
        vector<int> ans(st.size());
        for(int i = ans.size()-1; i >= 0; i--){
            ans[i] = st.top();
            st.pop();
        }
        return ans;
    }
};
