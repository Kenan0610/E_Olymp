#include <stdio.h>

int main ()
{
long long a,b,x,y,c;
scanf("%lld%lld",&a,&b);
x=a+b;
y=b-a+1;
printf("%lld",x%2==0 ? (x/2)*y : (y/2)*x);
return 0;
}
