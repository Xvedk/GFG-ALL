class Solution:
    # Function to convert binary tree into circular doubly linked list.
    def bTreeToClist(self, root):
        if not root:
            return None

        # Helper function to perform the in-order traversal and modify pointers
        def convert_to_cdll(node):
            nonlocal head, prev
            if node:
                # Recursively convert left subtree
                convert_to_cdll(node.left)

                # Process the current node
                if not head:
                    # If head is None, it means this is the leftmost node (first node of inorder traversal)
                    head = node
                else:
                    # Link the previous node's right pointer to the current node
                    prev.right = node
                    # Link the current node's left pointer to the previous node
                    node.left = prev

                # Update the previous node to the current node for the next iteration
                prev = node

                # Recursively convert right subtree
                convert_to_cdll(node.right)

        # Initialize variables
        head = None  # Head of the CDLL
        prev = None  # Previous node during traversal

        # Start the conversion
        convert_to_cdll(root)

        # Make the CDLL circular by connecting the last and first nodes
        head.left = prev
        prev.right = head

        return head

    # Function to print the CDLL in both forward and reverse order
    def print_cdll(self, head):
        if not head:
            return

        current = head
        print("Forward Order:")
        while True:
            print(current.data, end=" ")
            current = current.right
            if current == head:
                break

        print("\nReverse Order:")
        current = head.left
        while True:
            print(current.data, end=" ")
            current = current.left
            if current == head:
                break

