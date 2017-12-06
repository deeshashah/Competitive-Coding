#include <iostream>
#include <map>
using namespace std;
int main()
{
	map<int,string> mymap;
	map<int,string> :: iterator itr;
	mymap.insert(make_pair(0,"Zero"));
	mymap.insert(make_pair(1,"One"));
	mymap.insert(make_pair(2,"Two"));
	for(itr = mymap.begin(); itr!=mymap.end();itr++){
		cout << itr->first << " " << itr->second << endl;
	}
	return 0;
}