
# Implement strstr
[https://leetcode.com/problems/implement-strstr/description/](https://leetcode.com/problems/implement-strstr/description/)

#### My accepted Java Solution : 
```
class Solution {
    public boolean isPalindrome(String s) {
        int i=0,j=s.length()-1;
        while(i<j)
        {
            while(i< j && !Character.isLetterOrDigit(s.charAt(i)))
            {
                i++;
            }
            while(i<j && !Character.isLetterOrDigit(s.charAt(j)))
            {
                j--;
            }
            if(Character.toLowerCase(s.charAt(i))!=Character.toLowerCase(s.charAt(j)))
            {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
}

```

#### Editorial Java Solution : 
```
public boolean isPalindrome(String s) 
{
    int i = 0, j = s.length() - 1;
    while (i < j) 
    {
        while (i < j && !Character.isLetterOrDigit(s.charAt(i))) i++;
        while (i < j && !Character.isLetterOrDigit(s.charAt(j))) j--;
        if (Character.toLowerCase(s.charAt(i))
        != Character.toLowerCase(s.charAt(j))) 
        {
            return false;
        }
        i++; j--;
        }
        return true;
    }
```