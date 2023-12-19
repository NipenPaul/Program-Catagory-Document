class Solution {
    public int[][] imageSmoother(int[][] img) {
        int m = img.length;
        int n = img[0].length;
        int [][] dr = {{-1, -1}, {-1, 0}, {-1, 1}, {0, -1}, {0, 1}, {1, -1}, {1, 0}, {1, 1}};
        int [][] ans = new int[m][n];
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                int sum = img[i][j];
                int cnt = 1;
                for(int k = 0; k < dr.length; k++){
                    int x = dr[k][0] + i;
                    int y = dr[k][1] + j;
                    if(x >= 0 && y >= 0 && x < m && y < n){
                        cnt++;
                        sum += img[x][y];
                    }
                }
                ans[i][j] = sum / cnt;
            }
        }
        return ans;
    }
}
