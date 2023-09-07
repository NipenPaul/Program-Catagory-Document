public class Solution {
    public IList<bool> KidsWithCandies(int[] candies, int extraCandies) {
        bool[] ans = new bool[candies.Length];
        int mx = 0;
        int len = candies.Length;
        for(int i = 0; i < len; i++){
            if(candies[i] >= mx){
                mx = candies[i];
            }
        }
        for(int i = 0; i < len; i++){
            if(candies[i]+extraCandies >= mx){
                ans[i] = true;
            }else{
                ans[i] = false;
            }
        }
        return ans;
    }
}
