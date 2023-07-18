#include <iostream>
using namespace std;
long long function(long long n)
{
    if (n==1)
    return 1;
    if (n==0)
    return 0;
    return ((function(n-1))%123456789)+((function(n-2))%123456789);
}


int main()
{
  long long  n,x;
  cin>>n;
  x=function(n);
  cout<<x;
}
