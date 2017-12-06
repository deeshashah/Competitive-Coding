#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	vector<int> v;
	vector<int> tv;
	v.push_back(1);
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(3);
	v.push_back(3);
	v.push_back(5);
	v.push_back(5);
	cout<<v.size()<<endl;
	//cout<<v.begin()<<endl;
	//v.erase(v.begin()+2);
	int p = v.front();
	int n = v.size();
	cout<<n<<endl;
	
	vector<int>::iterator i;
	for (i = v.begin()+1; i != v.end(); ++i)
    
    {
    	if(p == *i)
    	{
    		v.erase(i,0);
    	}
    }
	return 0;
}