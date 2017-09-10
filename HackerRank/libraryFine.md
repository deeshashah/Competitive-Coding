# Library Fine 
[https://www.hackerrank.com/challenges/even-tree/problem](https://www.hackerrank.com/challenges/even-tree/problem)

### My C++ solution

```
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int actualD, actualM, actualY;
    int expD, expM,expY;
    int dayFine, monthFine;
    cin>>actualD>>actualM>>actualY;
    cin>>expD>>expM>>expY;
    int fine = 0;
    if(actualD>expD)
    {
         fine = (actualD - expD)*15;
    }
    if(actualM>expM)
    {
        
        fine = (actualM - expM)*500;
    }
    if(actualY>expY)
    {
         fine = 10000;
    }
    if(actualD < expD && actualM <= expM && actualY <= expY)
    {
        fine = 0;
    }
    if(actualM < expM && actualY<=expY)
    {
        fine = 0;
    }
    if(actualY<expY)
    {
        fine = 0;
    }
    cout<<fine<<endl;
    return 0;
}


```
