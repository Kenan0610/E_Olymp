#include <iostream>
using namespace std;
int main ()
{
    long long abc,a,b,c,x;
    cin>>abc;
    a=abc/100;
    b=abc/10%10;
    c=abc%10;
    x=c%a;
    cout<<x;
   
}
