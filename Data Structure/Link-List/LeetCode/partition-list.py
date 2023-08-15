# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def partition(self, head: Optional[ListNode], x: int) -> Optional[ListNode]:
        if head is None:
            return head
        lessList = None
        tail = None
        geList = None
        tail2 = None
        while head != None:
            if head.val < x:
                if lessList is None:
                    lessList = ListNode(head.val)
                    tail = lessList
                else:
                    newNode = ListNode(head.val)
                    tail.next = newNode
                    tail = newNode
            else:
                if geList is None:
                    geList = ListNode(head.val)
                    tail2 = geList
                else:
                    newNode = ListNode(head.val)
                    tail2.next = newNode
                    tail2 = newNode
            head = head.next
        if tail is None:
            return geList
        tail.next = geList
        return lessList
