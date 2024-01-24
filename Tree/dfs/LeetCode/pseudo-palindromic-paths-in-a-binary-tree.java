/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {

    int res;
    public int pseudoPalindromicPaths (TreeNode root) {
        int [] cnt = new int[10];
        res = 0;
        dfs(root, cnt);
        return res;
    }

    public void dfs(TreeNode root, int[] cnt){
        if(root != null){
            cnt[root.val]++;
            if(root.left != null)
                dfs(root.left, cnt);
            if(root.right != null)
                dfs(root.right, cnt);
            if(root.left == null && root.right == null){
                int odd = 0, sz = 0;
                for(int i = 1; i <= 9; i++){
                    if(cnt[i] % 2 == 1) odd++;
                    sz += cnt[i];
                }
                if(odd == 1 && sz % 2  == 1) res += 1;
                else if(sz % 2 == 0 && odd == 0) res += 1;
            }
            cnt[root.val]--;
        }
    }
}
