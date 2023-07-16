#include <iostream>
using namespace std;
int main ()
{
	long long abcd,a,b,c,d;
	cin>>abcd;
	a=abcd/1000;
	b=abcd/100%10;
	c=abcd/10%10;
	d=abcd%10;

	cout<<a*a+b*b+c*c+d*d;
	
	
	
	
	
	
	
}
