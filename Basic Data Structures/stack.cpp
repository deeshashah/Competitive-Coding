#include<iostream>
#include<stack>
using namespace std;

int main()
{
	stack<string> names;
	string n;
	char q;
	cout<< "Do u want to enter data?"<<endl;
	cin>>q;
	while(q == 'y')
	{
		cout<<"Please enter name:"<<endl;
		cin>>n;
		names.push(n);
		cout<< "Do u want to enter data?"<<endl;
		cin>>q;
	}
	cout<<"The total size of your stack is :"<<names.size()<<endl;
	cout<<"The top of stack:"<<names.top()<<endl;
	names.pop();
	cout<<"The top of stack:"<<names.top()<<endl;
	return 0;
}