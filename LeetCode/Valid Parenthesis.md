# Valid Parenthesis
[https://leetcode.com/problems/valid-parentheses/description/](https://leetcode.com/problems/valid-parentheses/description/) 

### Accepted Java Solution
```
class Solution {
    public boolean isValid(String s) {
       Stack<Character> sp = new Stack<Character>();
       if(s.length() == 1)
       {
           return false;
       }
       for(int i = 0;i<s.length();i++)
       {
           if(s.charAt(i) == '(' || s.charAt(i) == '{' || s.charAt(i) == '[')
           {
               sp.push(s.charAt(i));
           }
           
           else if(s.charAt(i) == ')')
           {
               if( !sp.empty() && sp.peek() == '(')
               {
                    sp.pop();
               }  
               else
               {
                   return false;
               }
           }
           else if(s.charAt(i) == '}')
           {
               if( !sp.empty() && sp.peek() == '{')
               {
                    sp.pop();
               }  
               else
               {
                   return false;
               }
           }
           else if(s.charAt(i) == ']')
           {
               if( !sp.empty() && sp.peek() == '[')
               {
                    sp.pop();
               }
               else
               {
                   return false;
               }
           }
        
       }
       if(sp.empty())
       {
           return true;
       }
       else
       {
           return false;
       }
       
    }
    
}
```

### Editorial 
```
public boolean isValid(String s) {
    Stack<Character> stack = new Stack<Character>();
    for (char c : s.toCharArray()) {
        if (c == '(')
            stack.push(')');
        else if (c == '{')
            stack.push('}');
        else if (c == '[')
            stack.push(']');
        else if (stack.isEmpty() || stack.pop() != c)
            return false;
    }
    return stack.isEmpty();
}
```
