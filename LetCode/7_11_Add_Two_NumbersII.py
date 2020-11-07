# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def addTwoNumbers(self, l1: ListNode, l2: ListNode) -> ListNode:
        num1 = ''
        num2 = ''
        firstList = l1
        secondList = l2
        res = ListNode(val=0, next=ListNode())
        resHead = res
        while firstList != None:
            num1 += str(firstList.val)
            firstList = firstList.next

        while secondList != None:
            num2 += str(secondList.val)
            secondList = secondList.next

        sum = str(int(num1) + int(num2))
        sumList = list(sum)
        print(sumList)
        for idx in range(0, len(sumList)):
            print(idx)
            res.val = int(sumList[idx])
            if(idx < len(sumList) - 1):
                res.next = ListNode(val=0, next=ListNode())
                print("res.val", res.val)
                res = res.next
            else:
                res.next = None
        return resHead
