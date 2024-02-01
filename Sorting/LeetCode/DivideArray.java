package Java.leetcode;

import java.util.Arrays;

public class DivideArray {

    public int[][] divideArray(int[] nums, int k) {
        int numsLength = nums.length;
        int row = numsLength / 3;
        int [][] ans = new int[row][3];
        Arrays.sort(nums);

        int ind = 0;
        for(int i = 0; i < row; i++){
            for(int j = 0; j < 3; j++){
                ans[i][j] = nums[ind++];
            }
        }

        for(int i = 0; i < row; i++){
            for(int j = 0; j < 1; j++){
                if(ans[i][j+2] - ans[i][j] > k){
                    return new int[][] {};
                }
            }
        }
        return ans;
    }
}
