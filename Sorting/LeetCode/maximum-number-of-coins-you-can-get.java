class Solution {
    public int maxCoins(int[] piles) {
        Arrays.sort(piles);
        int n = piles.length;
        int sum = 0, k = 0;
        for(int i = n-2; i >= 0; i -= 2){
            sum += piles[i];
            k++;
            if(n/3 == k) break;
        }
        return sum;
    }
}