# Min Cost Climbing Stairs
[https://leetcode.com/submissions/detail/138170886/](https://leetcode.com/submissions/detail/138170886/)

### Accepted Solution:
```
class Solution {
    public int minCostClimbingStairs(int[] cost) {
        //int[] minCost = new int[cost.length];
        int n = cost.length;
        if(n==0){ return n;}
        if(n==1){return cost[0];}
        if(n==2){return Math.min(cost[0],cost[1]);}
        for(int i=n-3;i>=0;i--){
            cost[i] = cost[i]+Math.min(cost[i+1],cost[i+2]);
        }
        return Math.min(cost[0],cost[1]);
    }
}
```


### Editorial:
```
class Solution {
    public int minCostClimbingStairs(int[] cost) {
        int f1 = 0, f2 = 0;
        for (int i = cost.length - 1; i >= 0; --i) {
            int f0 = cost[i] + Math.min(f1, f2);
            f2 = f1;
            f1 = f0;
        }
        return Math.min(f1, f2);
    }
}
```