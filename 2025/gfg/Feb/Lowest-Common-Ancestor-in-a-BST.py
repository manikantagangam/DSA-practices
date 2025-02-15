class Solution:
    def LCA(self, root, n1, n2):
        
        if not root or root == n1 or root == n2:
            return root
        
        l = self.LCA(root.left, n1, n2)
        r = self.LCA(root.right, n1, n2)
        
        if l and r:
            return root
        
        return l or r