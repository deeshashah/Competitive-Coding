
# Implement strstr
[https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/](https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/)

#### My accepted C++ Solution : 
```
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
    	//int i =1;
    	int len;
    	len = nums.size();
    	if(!len) return len;
    	int p = nums.front();
	    int n = nums.size();
    	cout<<n<<endl;
    	vector<int>::iterator i;
    	for (i = nums.begin()+1; i != nums.end(); )
        
        {
        	if(p == *i)
        	{
        	    p = *i;
        	    cout<<"removing : " << *i <<endl;
        		nums.erase(i);
        		
        		
        	}
        	else
        	{
        	    p = *i;
        	    ++i;
        	}
        }
        len = nums.size();
        
        return len;
    }
};
```

#### Editorial
public int removeDuplicates(int[] nums) {
    if (nums.length == 0) return 0;
    int i = 0;
    for (int j = 1; j < nums.length; j++) {
        if (nums[j] != nums[i]) {
            i++;
            nums[i] = nums[j];
        }
    }
    return i + 1;
}