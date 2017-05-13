// Leetcode : https://leetcode.com/problems/trapping-rain-water/#/description
// Accepted solution 
class Solution {
public:
    int trap(vector<int>& height) {
        int i,n,j,c;
        int inner_count=0,main_count = 0;
        int curr_max;
        n = height.size();
        for(i = 0;i<n;i++)
        {
            if(height[i]<=0)
            {
                continue;
            }
            else
            {
                
                curr_max = height[i];
                //cout<<"max at i : "<<i<<" is:" <<curr_max<<endl;
                while(curr_max>0)
                {
                    c = 0;
                    //cout << "Current max is : " << curr_max << endl;
                    inner_count = 0;
                    //cout<<"Inner count is :"<<inner_count<<endl;
                    for(j = i+1;height[j]<curr_max && j<n;j++)
                    {
                        inner_count = inner_count + (curr_max - height[j]);
                       
                        c = c+1;
                       // cout<< "J : "<<j<<endl;
                        
                    }
                    
                    // cout<< "j : "<<j<<endl;
                    // cout<< "n : "<<n<<endl;
                    if((j) == (n))
                    {
                        curr_max--;
                        //main_count = main_count-inner_count;
                        inner_count = 0;
                        
                        //cout<<"End of series"<<endl;
                        //i=i+1;
                        continue;
                        
                    }
                    else
                    {
                        //cout<<"1st"<<i<<endl;
                        //cout<<"1st:"<<j<<endl;
                        //cout<<"current slow counter at : "<<j<<endl;
                        //cout<<"Inner count is :"<<inner_count<<endl;
                        main_count = main_count+inner_count;
                        i = i+c;
                        //cout<<i<<endl;
                        break;
                    }
                }
            }
        }
        
      // cout << main_count<<endl;
       
        return main_count;
    }
};