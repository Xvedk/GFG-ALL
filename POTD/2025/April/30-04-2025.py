class Solution:
    # Function to find the length of a loop in the linked list.
    def countNodesInLoop(self, head):
        #code here
        
        fast, slow = head, head
        while fast and fast.next:
            fast = fast.next.next
            slow = slow.next
            if fast == slow:
                break
        else:
            return 0
            
        # now slow and fast must be inside the circle
        cnt = 1
        slow = slow.next
        while slow != fast:
            cnt += 1
            slow = slow.next
        return cnt
