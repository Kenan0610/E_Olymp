#include <iostream>
using namespace std;
int main ()
{
long long t1,t2,t3;
cin>>t1>>t2>>t3;
if (t1<t2 && t1<t3)
cout<<t1;
else if (t2<t1 && t2<t3)
cout<<t2;
else 
cout<<t3;
}
