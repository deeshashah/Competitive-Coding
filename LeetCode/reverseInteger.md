# Reverse Integer
[https://leetcode.com/problems/reverse-integer/#/description](https://leetcode.com/problems/reverse-integer/#/description)

#### My accepted Solution : 
```
#include <algorithm.h>
#include<bits/stdc++.h>
class Solution {
public:
    int reverse(int x) {
        string stringOfX;
        stringOfX = to_string(x);
        if(x < 0)
        {
            std::reverse(stringOfX.begin()+1, stringOfX.end());
            try
            {
                int answer = std::stoi(stringOfX);
                return answer;
            } 
            catch (const std::out_of_range& e)
            {
                return 0;
            }
        }
        else
        {
            std::reverse(stringOfX.begin(), stringOfX.end());
            try
            {
                int answer = std::stoi(stringOfX);
                return answer;
            } 
            catch (const std::out_of_range& e)
            {
                return 0;
            }
        }
        
    }
};
```