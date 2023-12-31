class Solution {
    public int maxLengthBetweenEqualCharacters(String s) {
        Map<Character, Integer> keepIndex = new HashMap();
        int ans = -1;
        for(int i = 0; i < s.length(); i++){
            if(keepIndex.containsKey(s.charAt(i))){
                ans = Math.max(ans, i - keepIndex.get(s.charAt(i)) -1);
            }else{
                keepIndex.put(s.charAt(i), i);
            }
        }
        return ans;
    }
}
