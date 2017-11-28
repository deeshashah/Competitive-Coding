# Jump Game
[https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/description/](https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/description/) 

### Accepted Solution
```
class Solution {
    public int[] twoSum(int[] numbers, int target) {
        int i=0,j=(numbers.length)-1;
        while(i< numbers.length || j>=0)
        {
            //System.out.println(numbers[j]);
            int sum = numbers[i] + numbers[j];
            if(sum > target)
            {
                j--;
            }
            else if(sum < target)
            {
                i++;
            }
            else if(sum == target)
            {
                int[] result = new int[2];
                result[0] = i+1;
                result[1] = j+1;
                return result;
            }
        }
        throw new IllegalArgumentException("No two sum solution");
    }
}
```


