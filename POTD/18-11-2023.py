class Solution:
    def reverseDLL(self, head):
        current = head
        new_head = None

        while current is not None:
            # Swap next and prev pointers
            temp = current.next
            current.next = current.prev
            current.prev = temp

            # Update the new head if the current node is not None
            if current is not None:
                new_head = current

            # Move to the next node
            current = temp

        return new_head
