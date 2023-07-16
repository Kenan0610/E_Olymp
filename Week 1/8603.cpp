#include <iostream>
using namespace std;
int main ()
{
	long long abc,a,b,c,x,y;
	cin>>abc;
	a=abc/100;
	b=abc/10%10;
	c=abc%10;
	x=a+b+c;
	y=a*b*c;
	cout<<x<<" "<<y;
}
