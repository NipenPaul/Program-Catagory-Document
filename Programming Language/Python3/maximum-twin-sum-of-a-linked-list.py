# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def pairSum(self, head: Optional[ListNode]) -> int:
        n = 0
        tem = head
        tail = None
        while tem != None:
            newNode = ListNode(tem.val)
            if tail is None:
                tail = newNode
            else:
                newNode.next = tail
                tail = newNode
            n += 1
            tem = tem.next
        ans = 0
        for i in range(0, n//2):
            ans = max(ans, head.val+tail.val)
            head = head.next
            tail = tail.next
        return ans
