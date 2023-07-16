#include <iostream>
using namespace std;
int main ()
{
	long long a,b,c,v;
	cin>>a>>b;
	if (a%b!=0)
	{
		c=a/b;
		v=a%b;
		cout<<c<<" "<<v;
	}
	else 
	cout<<"Divisible";
	
}
