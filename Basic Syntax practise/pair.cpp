#include<utility>
#include<iostream>
using namespace std;
int main()
{	
	pair<int,int> foo;
	pair<int,int> bar; 
	foo = make_pair(10,20);
	bar = make_pair(10.5, 'A');
	cout<<foo.first<<","<<foo.second<<endl;
	cout<<bar.first<<","<<bar.second<<endl;
	return 0;
}	