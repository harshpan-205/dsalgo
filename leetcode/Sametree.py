class Solution:
    def isSameTree(self, p: TreeNode, q: TreeNode) -> bool:
        if p == q == None: return True
        if (p is None and q is not None) or (q is None and p is not None): return False
        
        return p.val == q.val and self.isSameTree(p.left, q.left) and self.isSameTree(p.right, q.right)
