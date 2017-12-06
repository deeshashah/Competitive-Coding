//g++ -std=c++0x leetCodeCountSay.cpp -o lt

#include <iostream>
#include <string>
#include <vector>
#include <stdlib.h>  
using namespace std;
int main()
{
	int n, digit,count, digit_count,j,c;
	cout<<"Enter n : " << endl;
	cin >> n;
	int seq[n+1];
	int i;
	seq[1] = 1;
	for(i=2;i<=n;i++)
	{
		//cout <<i<<"-->"<<seq[i] << endl;
		if(seq[i-1]<=9)
		{
			
			string word = to_string(1)+to_string(i);
			seq[i] = atoi( word.c_str() );
			//cout << seq[i+1]<<endl;
		}
		else
		{
			digit_count = 0;
			int number = seq[i-1];
			
			while( number > 0 )
			{
			   int nextVal = number % 10;
			   digit_count = digit_count + 1;
			   number = number / 10;
			}
			int temp[digit_count+1];
			count = 1;    
		    number = seq[i-1];

		    while (number != 0){
		       temp[count] = number % 10;
		       number /= 10;
		       count++;
		    }
		    cout<< "**********"<<endl;
		    cout << "For : " << seq[i-1] << endl;
		    string mid_a="a";
		    for(j=count-1;j>=1;j--)
		    {
		    	cout << "J is : " << temp[j] << endl;
		    	c = 1;

		    	if(temp[j] == temp[j+1])
		    	{
		    		c = c+1;
		    		//cout << "Yes : " << mid << endl;
		    		//mid_a = mid_a + to_string(c)+to_string(j);
		    		//cout << "Yes : " << word << endl;
		    	}
		    	cout<< mid_a << endl;
		    	mid_a = mid_a + to_string(c)+to_string(j);
		    	
		    	
		    }
		    string word = mid_a;
		    cout << "Word : " << word << endl;
		    seq[i] = atoi( word.c_str() );
		    //cout << word << endl;
			
		}


	}
	
	
	return 0;
}

**************************************************

#include <iostream>
#include <string>
#include <vector>
#include <stdlib.h>  
using namespace std; 
int main()
{
	int seq[11];
	int i,digit_count,j,count,k,m;
	seq[1] = 111221;
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
		int temp[digit_count];
		count = digit_count;    
		number = seq[i-1];
	    while (number != 0){
	       temp[count] = number % 10;
	       number /= 10;
	       cout<< count << "-->" <<temp[count]<<endl;
	       count--;
	    }
	    int c = 0;
	    string word = "";
	    string mid_word = "";
	    c = 1;
	    //cout << "digit_count : " << digit_count<<endl;
	    for(m=1;m<=digit_count;m++)
	    {
	    j = 1;
		while(temp[j] != temp[j+1] && (j+1)<=digit_count)
		{
			word = word + to_string(1)+to_string(temp[j]);
			j++;
			m = m+j;
			
		}
		j = 1;	
	    cout << "Yoho : " << word << endl;
    	while(temp[j] == temp[j+1] && (j+1) <=digit_count)
    	{
    		//cout << "j : "<<j << endl;
    		cout <<j<<"-->" <<temp[j] << "--> " <<temp[j+1]<<endl;
    		k = temp[j+1];
    		
    		//cout << "Before c : " << c <<endl; 
    		c++;
    		cout << "After c : " << c << endl;
    		j++;
    		m = m + j;
    		
    	}

    	cout << "Repeating number : " <<k<< endl;
    	//cout << "uuuh! : " << word<<endl;
		mid_word = mid_word + to_string(c)+to_string(k);
		cout << "Wow :  "<<mid_word << endl;
    	
		string next = word + mid_word;
		cout << "Yippee : " << next <<endl;
	    }


	}
	return 0;
}