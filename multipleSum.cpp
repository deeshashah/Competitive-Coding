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
        int n,i,j,a;
        cin >> n;
        int count[n+1] ={0};
        count[1] = 1;
        
            for(i=2;i<=n;i=i+1)
            {
                
                cout <<"Count 1:"<<count[1]<<endl;
                a = i;
                cout << "For number :" << a << endl;
                count[2] = 0;
                while (a%2 == 0)
                {
                    cout <<"Count 1:"<<count[1]<<endl;
                    a = a/2;
                    
                    
                    if((count[2] + 1)>=count[2])
                    {
                        count[2] = count[2]+1;
                        
                    }
                    
                }
                cout <<"Count 1:"<<count[1]<<endl;
                for (j = 3; j < sqrt(i); j = j+2)
                {
                    a = i;
                    cout <<"a is :" << a <<endl;
                    while (a%j == 0)
                    {
                        //cout << j << endl;
                        a = a/j;
                        if((count[j] + 1)>count[j])
                            {
                                count[j] = count[j]+1;

                            }
                    }
                }
                cout <<"Count 1:"<<count[1]<<endl;
                if (a > 2)
                    cout <<"Oh yes" << a <<endl;
                    count[a] = count[a] +1;
            }
        cout <<"Count 1:"<<count[1]<<endl;
        for(i=1;i<=n;i++)
        {
            cout <<i << "--->" << count[i]  << "-->" << count[1]<<endl;
        }
        }
    return 0;
}
