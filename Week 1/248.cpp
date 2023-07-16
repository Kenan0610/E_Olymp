#include <iostream>
using namespace std;
int main ()
{
int i,cem=1,n;
cin>>n;
for (i=0;i<n*2+2;i+=2)
{
	cem=cem+i;
}
cout<<cem;
}
