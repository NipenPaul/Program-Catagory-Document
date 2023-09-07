class Node:
    def __init__(self, value):
        self.next = None
        self.prev = None
        self.val = value

class DoubleLinkList:
    def __init__(self):
        self.head = None
        self.tail = None
        self.size = 0

    def addAtHead(self, value):
        newNode = Node(value)
        if self.head is None:
            self.head = self.tail = newNode
        else:
            newNode.next = self.head
            self.head.prev = newNode
            self.head = newNode
        self.size += 1

    def addAtTail(self, value):
        newNode = Node(value)
        if self.tail is None:
            self.head = self.tail = newNode
        else:
            self.tail.next = newNode
            newNode.prev = self.tail
            self.tail = newNode
        self.size += 1

    def addAtIndex(self, value, index):
        if self.size+1 < index or index < 1:
            print("Invalid  position..!")
        else:
            if index == 1:
                self.addAtHead(value)
            elif index == self.size+1:
                self.addAtTail(value)
            else:
                node = self.head
                pos = 0
                while index-1 > pos and node is not None:
                    node = node.next
                    pos += 1
                newNode = Node(value)
                node.prev.next = newNode
                newNode.prev = node.prev
                node.prev = newNode
                newNode.next = node
                self.size += 1

    def deleteAtHead(self):
        if self.head is None:
            print("Empty List!")
        else:
            print("Deleted at head..")
            if self.head.next is None:
                self.head = self.tail = None
                self.size = 0
                return
            self.head = self.head.next
            self.head.prev = None
            self.size -= 1

    def deleteAtTail(self):
        if self.tail is None:
            print("Empty List!")
        else:
            print("Deleted at tail..")
            if self.tail.prev is None:
                self.head = self.tail = None
                self.size = 0
                return
            self.tail = self.tail.prev
            self.tail.next = None
            self.size -= 1

    def deleteAtIndex(self, index):
        if index > 0 and self.size >= index:
            if self.size == index:
                self.deleteAtTail()
                return
            if index == 1:
                self.deleteAtHead()
                return
            print(f"Deleted {index} position Value..")
            node = self.head
            pos = 0
            while index-1 > pos:
                node = node.next
                pos += 1
            node.prev.next = node.next
            node.next.prev = node.prev
            node = None
            self.size -= 1
        else:
            if self.head is None:
                print("Empty List!")
            else:
                print("Not Valid deleted index!")

    def __str__(self):
        node = self.head
        lst = []
        while node is not None:
            lst.append(node.val)
            node = node.next
        return f"[{', '.join(str(val) for val in lst)}]"

    def reversePrint(self):
        node = self.tail
        lst = []
        while node is not None:
            lst.append(node.val)
            node = node.prev
        print(lst)

# Double Link List Object Created...
obj = DoubleLinkList()
obj.addAtHead(5)
obj.addAtHead(4)
obj.addAtHead(3)
obj.addAtTail(6)
obj.addAtTail(7)
print(obj)
obj.reversePrint()
print(obj.size)
obj.addAtIndex(1, 1)
obj.addAtIndex(2, 2)
obj.addAtIndex(3, 3)
obj.addAtIndex(4, 3)
obj.addAtIndex(5, 4)
obj.addAtIndex(3, 2)
obj.addAtIndex(7, 1)
print(obj)
obj.deleteAtHead()
obj.deleteAtTail()
obj.deleteAtTail()
obj.addAtHead(1)
obj.reversePrint()
obj.deleteAtHead()
print(obj)
obj.deleteAtIndex(1)
print(obj)
obj.deleteAtIndex(3)
print(obj)
obj.deleteAtIndex(6)
print(obj)
