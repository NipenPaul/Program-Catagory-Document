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
    public ListNode SwapPairs(ListNode head) {
        ListNode tem = head;
        while(tem != null){
           // Console.Write(tem.val+" ");
            int x = tem.val;
            ListNode a = tem;
            tem = tem.next;
            
            if(tem == null) break;
            a.val = tem.val;
            tem.val = x;

            tem = tem.next;
        }
        return head;
    }
}
