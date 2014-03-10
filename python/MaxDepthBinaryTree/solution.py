class Solution:
    # @param root, a tree node
    # @return an integer
    def maxDepth(self, root):
        res = 0
        if (not root):
            return res
        resl = 1 + self.maxDepth(root.left)
        resr = 1 + self.maxDepth(root.right)
        
        res = max(resl,resr)
        return res