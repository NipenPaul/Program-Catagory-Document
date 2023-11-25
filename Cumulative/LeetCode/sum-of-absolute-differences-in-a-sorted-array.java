class Solution {
    public int[] getSumAbsoluteDifferences(int[] nums) {
        int n = nums.length;
        int [] cum = new int[n+2];
        int [] ans = new int [n];
        for(int i = 0; i < n; i++){
            cum[i+1] = cum[i] + nums[i];
        }
        for(int i = 0; i < n; i++){
            ans[i] = (nums[i]*(i+1))- cum[i+1];
            ans[i] += (cum[n]-cum[i]) - (nums[i]*(n-i));
        }
        return ans;
    }
}