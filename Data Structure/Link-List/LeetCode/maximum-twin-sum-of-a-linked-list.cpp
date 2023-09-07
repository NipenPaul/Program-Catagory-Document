/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     public int val;
 *     public ListNode next;
 *     public ListNode(int val=0, ListNode next=null) {
 *         this.val = val;
 *         this.next = next;
 *     }
 * }
 */
public class Solution {
    public int PairSum(ListNode head) {
        int len = 0, ans = 0;
        ListNode tem = head;
        ListNode tail = null;
        while(tem != null){
            ListNode newNode = new ListNode(tem.val);
            if(tail == null){
                tail = newNode;
            }else{
                newNode.next = tail;
                tail = newNode;
            }
            len++;
            tem = tem.next;
        }
        for(int i = 0; i < len/2; i++){
            ans = Math.Max(ans, head.val+tail.val);
            head = head.next;
            tail = tail.next;
        }
        return ans;
    }
}
