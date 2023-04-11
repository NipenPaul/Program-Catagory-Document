class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int m = 0, g = 0, p = 0;
        for(string &s: garbage){
            for(char &c: s){
                if(c == 'M') m++;
                else if(c == 'G') g++;
                else p++;
            }
        }
        int ans = m+g+p;
        for(int i = 0; i < garbage.size(); i++){
            for(char &c: garbage[i]){
                if(c == 'M') m--;
            }
            if(m == 0)break;
            ans += travel[i];
        }
        for(int i = 0; i < garbage.size(); i++){
            for(char &c: garbage[i]){
                if(c == 'G') g--;
            }
            if(g == 0)break;
            ans += travel[i];
        }
        for(int i = 0; i < garbage.size(); i++){
            for(char &c: garbage[i]){
                if(c == 'P') p--;
            }
            if(p == 0)break;
            ans += travel[i];
        }
        return ans;
    }
};
