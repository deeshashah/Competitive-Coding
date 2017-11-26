# Sentence Similarity
[https://leetcode.com/contest/weekly-contest-60/problems/sentence-similarity/](https://leetcode.com/contest/weekly-contest-60/problems/sentence-similarity/)

#### My accepted Solution : 
```
class Solution {
    public boolean areSentencesSimilar(String[] words1, String[] words2, String[][] pairs) {
        int n = pairs.length;
        int m = pairs[0].length;
        int i,j,k;
        int c = 0;
        if(words1.length!= words2.length)
        {
            return false;
        }
        for(j=0;j<words1.length;j++)
        {
            if(words1[j].equals(words2[j]))
            {
                c = c+1;
            }
            for(i=0;i<n;i++)
            {
                
                if(words1[j].equals(pairs[i][0]) && words2[j].equals(pairs[i][1])
                  || words1[j].equals(pairs[i][1]) && words2[j].equals(pairs[i][0]))
                {
                    c = c+1;
                }
            }
        }
        if(c == words1.length)
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