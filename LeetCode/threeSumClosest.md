# 3Sum Closest

[https://leetcode.com/problems/3sum-closest/#/description]()

```
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int i,j,k;
        int minDifference = 99999999999,answer;
        for(i=0;i<nums.size();i++)
        {
            for(j=1;j<nums.size();j++)
            {
                for(k=2;k<nums.size();k++)
                {
                    
                    if(i!=j && j!=k && k!=i)
                    {
                        int sum = nums[i] + nums[j] + nums[k];
                        if((abs(target - sum)) < minDifference)
                        {
                            minDifference = abs(target - sum);
                            answer = sum;
                            if (minDifference == 0)
                                return answer;
                        }
                    }
                    
                }
            }
        }
        return answer;
    }
};
```
