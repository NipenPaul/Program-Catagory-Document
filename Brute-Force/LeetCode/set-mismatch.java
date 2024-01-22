class Solution {
    public int[] findErrorNums(int[] nums) {
        int [] ans = new int[2];
        Map<Integer, Integer> mp = new HashMap<>();
        for (int num : nums) {
            mp.put(num, mp.get(num) == null ? 1 : mp.get(num) + 1);
        }
        for(int i = 1; i <= nums.length; i++){
            if(mp.get(i) == null){
                ans[1] = i;
            }else if(mp.get(i) == 2){
                ans[0] = i;
            }
        }
        return ans;
    }
}
