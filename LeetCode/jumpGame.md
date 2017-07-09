# Jump Game
[https://leetcode.com/problems/jump-game/#/description](https://leetcode.com/problems/jump-game/#/description) 

### Accepted Solution
```
class Solution {
public:
    bool canJump(vector<int>& nums) {
        int i,j;
        bool answer = false,zero_present = false;
        if(nums.size()==1)
        {
            return true;
        }
        if(nums[0]==0)
        {
            return false;
        }
        for(i=nums.size()-2;i>=0;i--)
        {
            //cout<<nums[i]<<endl;
            if(nums[i]==0)
            {
                zero_present = true;
                for(j=1;(i-j)>=0;j++)
                {
                    if(nums[(i-j)]>j)
                    {
                        answer = true;
                        break;
                    }
                }
                if((i-j)==-1)
                {
                    answer = false;
                    break;
                }
            }
        }
        if(!zero_present){
            return true;
        }
    
        return answer;
        
    }
};
