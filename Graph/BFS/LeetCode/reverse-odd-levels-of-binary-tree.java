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
    public TreeNode reverseOddLevels(TreeNode root) {
        bfs(root);
        return root;
    }

    private void bfs(TreeNode root) {
        Queue<TreeNode> que = new LinkedList<>();
        Queue<TreeNode> que2 = new LinkedList<>();
        List<Integer> lst = new ArrayList<>();
        que.add(root);
        int level = 0;
        while (!que.isEmpty()) {
            int sz = que.size();
            List<Integer> tem = new ArrayList<>();
            for (int i = 0; i < sz; i++) {
                if (que.peek().left != null) {
                    que.add(que.peek().left);
                }

                if (que.peek().right != null) {
                    que.add(que.peek().right);
                }

                que2.add(que.peek());
                tem.add(que.poll().val);
            }

            if ((level & 1)  > 0) {
                Collections.reverse(tem);
            }
            
            lst.addAll(tem);
            level++;
        }
        
        int ind = 0;
        while (!que2.isEmpty()) {
            que2.peek().val = lst.get(ind++);
            que2.poll();
        }
    }
}