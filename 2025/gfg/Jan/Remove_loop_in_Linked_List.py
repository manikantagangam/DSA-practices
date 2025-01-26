class Solution:
    #Function to remove a loop in the linked list.
    def removeLoop(self, head):
        if head is None and head.next is None:
            return
        
        slow = head
        fast = head
        
        while slow and fast and fast.next:
            slow = slow.next
            fast = fast.next.next
            
            if slow == fast:
                slow = head
            
                while slow != fast:
                    slow = slow.next
                    fast = fast.next
                
                while fast.next != slow:
                    fast = fast.next
                    
                fast.next = None 