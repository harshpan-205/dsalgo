def addTwoNumbers(self, l1: ListNode, l2: ListNode) -> ListNode:
        if(not l1 or not l2):
            return l1 or l2
        s1 = ''
        s2 = ''
        while(l1 != None):
            s1 = str(l1.val) + s1
            l1 = l1.next
        while(l2 != None):
            s2 = str(l2.val) + s2
            l2 = l2.next
        res = str(int(s1)+int(s2))[::-1]
        node = ListNode(res[0])
        head = node
        for i in res[1:]:
            node.next = ListNode(i)
            node = node.next
        return head
