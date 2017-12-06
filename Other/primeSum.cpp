#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n,i,j;
        cin >> n;
        int number[n+1];
        int vec[n+1] = {0};
        for(i=1;i<=n;i++)
        {
            number[i] = i;
            //cout<<i<<"-->" << num[i]<<endl;
        }
        //cout << "Num 2"<<num[2]<<endl;
        for(i=2;i<=n;i++)
        {
            
            for(j=2;j<=i;j++)
            {
                if(i%j == 0 && vec[j]==0)
                {
                    vec[i+j] = 1;
                }
            }
            
        }
        //cout << "Num 2"<<number[2]<<endl;
        int sum = 0;
        vec[1] = 1;
        //cout << num[2] << endl;
        for(i=1;i<=n;i++)
        {
           cout << i << "-->" << vec[i] << endl;
           if(vec[i] == 0)
           {
               
               sum = sum+number[i];
           }
        }
        cout << sum<<endl;
    }
    return 0;
}
