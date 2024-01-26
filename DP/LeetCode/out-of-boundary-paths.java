class Solution {
    int MOD = 1000000007;
    public int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
        int[][][] dp = new int[m][n][maxMove+1];
        for (int[][] l : dp) {
            for (int[] sl : l) {
                Arrays.fill(sl, -1);
            }
        }
        return rec(m, n, maxMove, startRow, startColumn, dp);
    }

    public int rec(int m, int n, int N, int i, int j, int[][][] dp) {
        if (i == m || j == n || i < 0 || j < 0) return 1;
        if (N == 0) return 0;
        if (dp[i][j][N] >= 0) return dp[i][j][N];
        dp[i][j][N] = ((rec(m, n, N - 1, i - 1, j, dp)
                + rec(m, n, N - 1, i + 1, j, dp)) % MOD
                + (rec(m, n, N - 1, i, j - 1, dp)
                + rec(m, n, N - 1, i, j + 1, dp)) % MOD
        ) % MOD;
        return dp[i][j][N];
    }
}