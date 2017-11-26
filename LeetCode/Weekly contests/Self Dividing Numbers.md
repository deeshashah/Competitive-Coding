# Self Dividing Numbers
[https://leetcode.com/contest/weekly-contest-59/problems/self-dividing-numbers/](https://leetcode.com/contest/weekly-contest-59/problems/self-dividing-numbers/)

#### My accepted Solution : 
```
class Solution {
    public List<Integer> selfDividingNumbers(int left, int right) {
        List<Integer> sd = new ArrayList<Integer>();
        int i;

        for(i=left;i<=right;i++)
        {
            int temp  = i;
            int temp1 = i;
            int flag = 1;
            while (temp1 > 0) 
            {
                int d = temp1%10;
                if(d == 0 || temp%d!=0)
                {
                    flag = 0;
                    break;
                }
                
                temp1 =  temp1 / 10;
                
                
            }
            if(flag==1)
            {
                sd.add(temp);
            }
        }
        return sd;
    }
}
```