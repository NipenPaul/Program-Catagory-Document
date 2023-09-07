class Solution {
public:
    string simplifyPath(string path) {
        string res = "";
        stack<string> st;
        for(int i = 0; i < path.size(); i++){
            if(path[i] == '/') continue;
            string tem = "";
            while(i < path.size() && path[i] != '/'){
                tem += path[i];
                i++;
            }
            if(tem == ".") continue;
            else if(tem == ".."){
                if(!st.empty()){
                    st.pop();
                }
            }else{
                st.push(tem);
            }
        }
        while(!st.empty()){
            res = "/" + st.top() + res;
            st.pop();
        }
        if(res.size() == 0) return "/";
        return res;
    }
};
