class Solution {
public:
    int compress(vector<char>& chars) {
        int i = 0, cnt = 0;
        while(i < chars.size()){
            int len = 1;
            while(i+len < chars.size() && chars[i+len] == chars[i]){
                len++;
            }
            chars[cnt++] = chars[i];
            if(len > 1){
                for(char c: to_string(len)){
                    chars[cnt++] = c;
                }
            }
            i += len;
        }
       return cnt; 
    }
};
