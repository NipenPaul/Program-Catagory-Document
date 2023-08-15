class LinkList:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next
    def insertFirst(self, head, val):
        newNode = LinkList(val)
        if head is None:
            head = newNode
        else:
            newNode.next = head
            head = newNode
        return head
    def showLinkList(self, head):
        lst = []
        while head is not None:
            lst.append(head.val)
            head = head.next
        print(lst)
        #return f"[{', '.join(str(val) for val in lst)}]"

head = LinkList()
head = head.insertFirst(head, 4)
head = LinkList().insertFirst(head, 3)
head = LinkList().insertFirst(head, 1)
head.showLinkList(head)
head = head.insertFirst(head, 7)
head.showLinkList(head)
