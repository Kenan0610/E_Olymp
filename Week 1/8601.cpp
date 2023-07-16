#include <iostream>
using namespace std;
int main ()
{
    long long ab,a,b;
    cin>>ab;
    a=ab/10;
    b=ab%10;
    ab=b*10+a;
    cout<<ab;
}
