class Solution:
    def hasPathSum(self, root: TreeNode, sum: int) -> bool:
        if not root:
            return False
        val = sum - root.val
        if val == 0 and not(root.left or root.right):
            return True
        return self.hasPathSum(root.left, val) or self.hasPathSum(root.right, val)
