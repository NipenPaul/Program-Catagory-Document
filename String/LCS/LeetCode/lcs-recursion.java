 public int rec(String text1, String text2, int i, int j, int[][] dp) {
        if (i < 0 || j < 0) return 0;
        if (dp[i][j] != -1) return dp[i][j];
        if (text1.charAt(i) == text2.charAt(j)) {
            return dp[i][j] = 1 + rec(text1, text2, i - 1, j - 1, dp);
        }
        int mx = 0;
        mx = Math.max(mx, rec(text1, text2, i, j - 1, dp));
        mx = Math.max(mx, rec(text1, text2, i - 1, j, dp));
        return dp[i][j] = mx;
    }
