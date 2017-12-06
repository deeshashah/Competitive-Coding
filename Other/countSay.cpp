#include <iostream>
#include <string>
#include <vector>
#include <stdlib.h>  
using namespace std; 
int main()
{
	long long int seq[11];
	long long int i,digit_count,j,count,k,m;
	seq[1] = 31131211131221;
	string mid_word;
	for(i=2;i<=2;i++)
	{
		cout <<seq[i-1]<<endl;
		digit_count = 0;
		int number = seq[i-1];
		while(number > 0)
			{
			   int nextVal = number % 10;
			   digit_count = digit_count + 1;
			   number = number / 10;
			}
		cout<< "DG : " << digit_count <<endl;
		long long int temp[digit_count];
		count = digit_count;    
		number = seq[i-1];
	    while (number != 0){
	       temp[count] = number % 10;
	       number /= 10;
	       //cout<< count << "-->" <<temp[count]<<endl;
	       count--;
	    }
	    long long int c = 0;
	    //string word = "";
	    string mid_word = "";
	    c = 1;
	    //cout << "digit_count : " << digit_count<<endl;
	    long long int pre = temp[1];
	    string word = "";
	    
	    for(j = 2;j<=digit_count+1;j++)
	    {
	    	
	    	if(pre == temp[j])
	    	{
	    		//cout << pre << "--->" << temp[j] <<endl;
	    		c++;
	    		// cout << "Pre : "<<pre<<endl;
	    		// cout << "c" << c << endl;
	    		//pre = temp[j];
	    	}
	    	else
	    	{	
	    		cout << "Check word" << mid_word << endl;
	    		//cout <<"c : " << c <<endl;
	    		mid_word = mid_word + to_string(c) + to_string(pre);
	    		pre = temp[j];
	    		c = 1;
	    		cout << "c : " << c << endl;
	    		cout << "pre: " << pre <<endl;
	    	}
	    	

	    }
	    cout << mid_word <<endl;


	}
	return 0;
}