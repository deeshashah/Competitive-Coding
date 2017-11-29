# Missing Ranges (Problem number 163 on leetcode(Subscribtion required))
Given a sorted integer array where the range of elements are [0, 99] inclusive, return its
missing ranges.
For example, given [0, 1, 3, 50, 75], return [“2”, “4->49”, “51->74”, “76->99”]

#### My Solution
```
class MissingRanges
{

	static void findMissingRanges(int[] values)
	{
		int i,j;
		int low,high;
		for(i=0;i<values.length;i++)
		{
			j = i+1;
			low=999;
			high=999;
			//System.out.println("for i: "+i);
			if(values[i]>99)
			{
				continue;
			}
			if((i+1)<values.length && values[j]!=values[i]+1)
			{
				low = values[i]+1;
				if(values[j]<99)
				{
					high = values[j]-1;
				}
				else
				{
					high = 99;
				}
			}
			if(i==values.length-1 && values[i]<99)
			{
				low = values[i]+1;
				high = 99;
			}
			if(low==high && low!=999)
			{
				System.out.println(low);
			}
			else if(low!=999)
			{
				System.out.println(low+"-"+high);
			}
			
		}
	}
	public static void main(String[] args) 
	{
		int[] values = {0, 1, 3, 50, 75};
		Arrays.sort(values);
		findMissingRanges(values);
	}
}
```
#### Editorial
class PrintMissingElement 
{
    // A O(n) function to print missing elements in an array
    void printMissing(int arr[], int n) 
    {
        int LIMIT = 100;
 
        boolean seen[] = new boolean[LIMIT];
 
        // Initialize all number from 0 to 99 as NOT seen
        for (int i = 0; i < LIMIT; i++) 
            seen[i] = false;
 
        // Mark present elements in range [0-99] as seen
        for (int i = 0; i < n; i++) 
        {
            if (arr[i] < LIMIT)
                seen[arr[i]] = true;
        }
 
        // Print missing element
        int i = 0;
        while (i < LIMIT) 
        {
            // If i is missing
            if (seen[i] == false) 
            {
                // Find if there are more missing elements after i
                int j = i + 1;
                while (j < LIMIT && seen[j] == false)
                    j++;
                 
                // Print missing single or range
                int p = j-1;
                System.out.println(i+1==j ? i : i + "-" + p);
 
                // Update u
                i = j;
            } 
            else
                i++;
        }
    }
 
    // Driver program to test above functions
    public static void main(String[] args) 
    {
        PrintMissingElement missing = new PrintMissingElement();
        int arr[] = {88, 105, 3, 2, 200, 0, 10};
        int n = arr.length;
        missing.printMissing(arr, n);
    }
}