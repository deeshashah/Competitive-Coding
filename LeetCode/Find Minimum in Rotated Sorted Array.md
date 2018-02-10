[https://leetcode.com/submissions/detail/138280675/](https://leetcode.com/submissions/detail/138280675/)

### My Solution:
```
class Solution {
    public int findMinimum(int[] nums,int low,int high,int n){
        if(high<low){return nums[0];}
        if(high==low){return nums[low];}
        if(high>low){
            int m = low + (high - low)/2;
            if(m<high && nums[m]>nums[m+1]){
                return nums[m+1];
            }
            if(m>low && nums[m]<nums[m-1]){
                return nums[m];
            }
            if(nums[high]>nums[m]){
                return findMinimum(nums,low,m-1,n);
            }
            return findMinimum(nums,m+1,high,n);
        }
        return 0;
    }
    
    public int findMin(int[] nums) {
        if(nums.length==1){return nums[0];}
        return findMinimum(nums,0,nums.length-1,nums.length);
    }
}
```

### Editorial:
```
public class Solution {
    public int findMin(int[] num) {
        if (num == null || num.length == 0) {
            return 0;
        }
        if (num.length == 1) {
            return num[0];
        }
        int start = 0, end = num.length - 1;
        while (start < end) {
            int mid = (start + end) / 2;
            if (mid > 0 && num[mid] < num[mid - 1]) {
                return num[mid];
            }
            if (num[start] <= num[mid] && num[mid] > num[end]) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }
        return num[start];
    }
}
```