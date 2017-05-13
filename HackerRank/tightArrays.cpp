Competition : 101Hack48
Name : Tight Arrays
link : https://www.hackerrank.com/contests/101hack48/challenges/tight-arrays/editorial

#My Code : 
#include <bits/stdc++.h>

using namespace std;

int shortestTightArray(int a, int b, int c){
    int numbers[101],i,j,second_half;
    
    numbers[0] = a;
    i = 1;
    if(a == b)
    {
        i = 0;
    }
    if(a < b)
    {
        int temp = a;
        while((temp+1)<b)
        {
            numbers[i] = temp+1;
            //cout<<temp+1<<endl;
            temp = temp + 1;
            i = i+1;
        }
        numbers[i] = b;
    }
    
    if(a > b)
    {
        int temp = a;
        while((temp-1)>b)
        {
            numbers[i] = temp-1;
            //cout<<temp+1<<endl;
            temp = temp - 1;
            i = i+1;
        }
        numbers[i] = b;
    }
    second_half = i+1;
    if(b==c)
    {
        second_half = i;
        numbers[second_half] = c;
    }
    if(b < c)
    {
        int temp = b;
        while((temp+1)<c)
        {
            numbers[second_half] = temp+1;
            //cout<<temp+1<<endl;
            temp = temp + 1;
            second_half = second_half+1;
        }
        numbers[second_half] = c;
    }
    
    if(b > c)
    {
        int temp = b;
        while((temp-1)>c)
        {
            numbers[second_half] = temp-1;
            //cout<<temp+1<<endl;
            temp = temp - 1;
            second_half = second_half+1;
        }
         numbers[second_half] = c;
    }
    /*for(j=0;j<=second_half;j++)
    {
        cout<<numbers[j]<<endl;
    }*/
    //cout<<second_half<<endl;
    return second_half+1;
}

int main() {
    int a;
    int b;
    int c;
    cin >> a >> b >> c;
    //cout<<"Hello World";
    int result = shortestTightArray(a, b, c);
    
    cout << result << endl;
    return 0;
}


Editorial :
#include <iostream>
using namespace std;

int abs(int x) {
    // ...
}
int main() {
    int a, b, c;
    cin >> a >> b >> c;
    cout << 1 + abs(a - b) + abs(b - c) << endl;
}

Explanation : 
#It takes |a-b| seconds to go from a to b. it takes |b-c| seconds to go from b to c.  We need to add  since we need to count the starting position as well. Thus formula : 1 + abs(a - b) + abs(b - c)
