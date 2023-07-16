#include <iostream>
using namespace std;
int main ()
{
	long long a,b,n;
	cin>>n>>a>>b;
	if (n%a==0 && n%b==0)
	cout<<"YES";
	else
	cout<<"NO";
}
