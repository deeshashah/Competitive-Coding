# Binary Tree Level Order Traversal

[https://leetcode.com/problems/binary-tree-level-order-traversal/#/submissions/1](https://leetcode.com/problems/binary-tree-level-order-traversal/#/submissions/1)

### My Solution

# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

```python
class Solution(object):
    
    def levelOrder(self, root):
        """
        :type root: TreeNode
        :rtype: List[List[int]]
        """
        nodesDict = {}
        if(root==None) :
            emptyList = []
            return emptyList
        nodesDict = self.DFS(root,0,nodesDict)
        print nodesDict
        finalNodesList = []
        for key,value in nodesDict.iteritems():
            finalNodesList.append(value)
        return finalNodesList
    
    def DFS(self,root,c,nodesDict) :
        if not nodesDict.has_key(c):
            nodesDict[c] = []
        nodesDict[c].append(root.val)
        print root.val
        root1 = root.left
        print c
        if root1!=None:
            self.DFS(root1,c+1,nodesDict)
        root2 = root.right
        if root2!=None:
            #nodesList[r].append(root2.val)
            self.DFS(root2,c+1,nodesDict)
        return nodesDict
```