class Solution:
    # Return the kth smallest element in the given BST 
    def kthSmallest(self, root, k):
        def helper(root, l):
            if not root:
                return
            helper(root.left, l)
            l.append(root.data)
            helper(root.right, l)
            return l
        
        l = []
        l = helper(root, l)
        
        if k > len(l) or k <= 0:
            return -1
        
        return l[k - 1]