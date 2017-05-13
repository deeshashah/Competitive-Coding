// Note that compile it using this command to not get the error of to_string():  g++ -std=c++0x KaratsubaMul.cpp -o karat

#include <iostream>
#include <string>
#include <math.h> 
using namespace std;
int main()
{
	long long int n1, n2, n, a,b,c,d, div_factor, product;
	string sn1;
	cout << "Enter two numbers of equal length: " << endl;
	cin >> n1 >> n2 ;
	//cout << len(n1) << endl;
	n = to_string(n1).length();
	div_factor = pow(10,n/2);
	b = n1%div_factor;
	a = n1/div_factor;
	c = n2/div_factor;
	d = n2%div_factor;
	long long int t1 = pow(10,n)*a*c;
	long long int t2 = div_factor*((a*d)+(b*c));
	long long int t3 = b*d;
	product = t1+t2+t3;
	cout << product << endl;
	return 0;
}