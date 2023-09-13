/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public int pairSum(ListNode head) {
       int len = 0;
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
       int ans = 0;
       for(int i = 0; i < len/2; i++){
           ans = Math.max(ans, head.val+tail.val);
           head = head.next;
           tail = tail.next;
       }
       //System.out.print(len);
       return ans;
    }
}
