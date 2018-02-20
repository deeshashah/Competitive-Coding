// https://leetcode.com/problems/single-number/description/

/*
    n XOR 0 = n
    n XOR n = 0
    Take XOR of all numbers
*/

class Solution {
    public int singleNumber(int[] nums) {
            int n = 0;
            for(int i=0;i<nums.length;i++){
                n = n ^ nums[i]; 
            }
            return n;
        }
    
}