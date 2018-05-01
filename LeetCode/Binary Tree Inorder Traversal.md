# Binary Tree Inorder Traversal
[https://leetcode.com/problems/binary-tree-inorder-traversal/description/](https://leetcode.com/problems/binary-tree-inorder-traversal/description/)

### My Solution
```
/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode(int x) { val = x; }
 * }
 */
class Solution {
    public List<Integer> inorderTraversal(TreeNode root) {
        List<Integer> answer = new ArrayList<Integer>();
        if(root==null){return answer;}
        Stack<TreeNode> s = new Stack<TreeNode>();
        TreeNode current = null;
        current = root;
        s.push(current);
        while(current.left!=null){
            current = current.left;
            s.push(current);
        }
        
        while(!s.isEmpty()){
            TreeNode x = s.pop();
            answer.add(x.val);
            if(x.right!=null){
                s.push(x.right);
                TreeNode y = x.right;
                while(y.left!=null){
                    s.push(y.left);
                    y = y.left;
                }
                x = x.right;
                
            }
            
        }
        return answer;
    }   
}
```


### Editorial

```
public class Solution {
    public List < Integer > inorderTraversal(TreeNode root) {
        List < Integer > res = new ArrayList < > ();
        Stack < TreeNode > stack = new Stack < > ();
        TreeNode curr = root;
        while (curr != null || !stack.isEmpty()) {
            while (curr != null) {
                stack.push(curr);
                curr = curr.left;
            }
            curr = stack.pop();
            res.add(curr.val);
            curr = curr.right;
        }
        return res;
    }
}

```
