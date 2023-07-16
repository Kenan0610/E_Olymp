#include <iostream>
using namespace std;
int main ()
{
	long long a,b,c;
	cin>>a>>b>>c;
	if (a!=b && a!=c && b!=c)
	cout<<3;
	else if (a==b && a==c && c==b)
	cout<<1;
	else
	cout<<2;
}
