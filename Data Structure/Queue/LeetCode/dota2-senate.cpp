class Solution {
public:
    string predictPartyVictory(string senate) {
        int n = senate.size();
        queue<int> queR, queD;
        for(int i = 0; i < n; i++){
            if(senate[i] == 'R'){
                queR.push(i);
            }else{
                queD.push(i);
            }
        }
        while(!queR.empty() && !queD.empty()){
            int r = queR.front();
            queR.pop();
            int d = queD.front();
            queD.pop();
            if(d < r){
                queD.push(d+n);
            }else{
                queR.push(r+n);
            }
        }
        return queR.empty() ? "Dire" : "Radiant";
    }
};
