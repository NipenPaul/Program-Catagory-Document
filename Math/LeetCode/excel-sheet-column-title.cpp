class Solution {
public:
    string convertToTitle(int columnNumber) {
        string ans ="";
        while(columnNumber != 0){
            int rem = columnNumber % 26;
            if(rem == 0){
                rem = 25;
                columnNumber--;
            }else{
                rem--;
            }
            char c = 'A'+rem;
            ans += c;
            columnNumber /= 26;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
