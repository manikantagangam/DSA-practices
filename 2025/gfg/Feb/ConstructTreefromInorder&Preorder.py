'''
# Node class
class Node:
    def __init__(self,val):
        self.data = val
        self.right = None
        self.left = None

'''
class Solution:
    def buildTree(self, inorder, preorder):
        def helper(inorder, preorder):
            
            if not inorder or not preorder:
                return None
            
            root_val = preorder.pop(0)
            root = Node(root_val)
            
            inorder_index = inorder.index(root_val)
            
            root.left = helper(inorder[:inorder_index], preorder)
            root.right = helper(inorder[inorder_index+1:], preorder)
            
            return root
        
        return helper(inorder, preorder)