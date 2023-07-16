#include <iostream>
using namespace std;
int main ()
{
long long a,b,c,d,max;
cin>>a>>b>>c>>d;
max=a;
if (b>max)max=b;
if (c>max)max=c;
if (d>max)max=d;
cout<<max;
}
