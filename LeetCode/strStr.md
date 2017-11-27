
# Implement strstr
[https://leetcode.com/problems/implement-strstr/description/](https://leetcode.com/problems/implement-strstr/description/)

#### My accepted Java Solution : 
```
class Solution {
    public int strStr(String haystack, String needle) {
        int i,r,k=-1,j;
        if(haystack.length()==0)
        {
            
            if(needle.length()==0)
            {
                return 0;
            }
            return -1;
        }
        
        if(needle.length()==0)
        {
            return 0;
        }
        if(needle.length()>haystack.length())
        {
            return -1;
        }
        for(i=0;i<haystack.length();i++)
        {
            j=0;
            if(haystack.charAt(i) == needle.charAt(j))
            {
                k = i;
                while(j<needle.length() && i<haystack.length() && haystack.charAt(i)==needle.charAt(j))
                {
                    i++;
                    j++;
                }
                if(j==needle.length())
                {
                return k;
                }   
                else
                {
                    i = k;
                }
            }
            
        }
        return -1;
    }
}
```

#### Editorial Java Solution 1: 
```
public int strStr(String haystack, String needle) 
{
	for (int i = 0; ; i++) 
 	{
 		for (int j = 0; ; j++) 
 		{
 			if (j == needle.length()) return i;
			if (i + j == haystack.length()) return -1;
 			if (needle.charAt(j) != haystack.charAt(i + j)) break;
 		}
 	}
}
```

#### One line Java Solution 2: 
```
public int strStr(String haystack, String needle) {
        return haystack.indexOf(needle);
    }
}
```
