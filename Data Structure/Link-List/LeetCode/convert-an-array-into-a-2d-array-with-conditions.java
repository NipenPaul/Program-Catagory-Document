class Solution {
    public List<List<Integer>> findMatrix(int[] nums) {
        int cnt[] = new int[nums.length + 1];
        
        ArrayList<List<Integer>> ans = new ArrayList<>();
        for(int c: nums){
            if(cnt[c] >= ans.size()){
                ans.add(new ArrayList<>());
            }
            ans.get(cnt[c]).add(c);
            cnt[c]++;
        }
        return ans;
    }
}
