class Solution {
    public int maxChunksToSorted(int[] arr) {
        int [] freq = new int[arr.length];
        int i = 0, mx = 0, ans = 1;
        for (int x: arr) {
            boolean ok = true;
            for(int j = 0; j <= mx; j++){
                if(freq[j] != 1) {
                    ok = false;
                }
            }
            if(ok) {
                ans++;
            }

            freq[x] = 1;
            mx = Math.max(mx, x);
        }

        return ans;
    }
}