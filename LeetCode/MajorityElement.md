# Majority Element
[https://leetcode.com/problems/majority-element/description/](https://leetcode.com/problems/majority-element/description/)

### My Solution:
```

class Solution {
    public int majorityElement(int[] nums) {
        Map<Integer, Integer> m1 = new HashMap<Integer, Integer>();
        int n_2 = nums.length/2;
        for(int i =0;i<nums.length;i++){
            if(m1.containsKey(nums[i])){
                m1.put(nums[i],m1.get(nums[i])+1);
            }
            else{
                m1.put(nums[i],1);
            }
        }
        for(Map.Entry<Integer, Integer> e1 : m1.entrySet()){
            if(e1.getValue()>n_2){
                return e1.getKey();
            }
        }
        return 0;
    }
}
```

### Editorial:
```
	class Solution {
    public int majorityElement(int[] nums) {
        Arrays.sort(nums);
        return nums[nums.length/2];
    }
}
```