#include <stdio.h>
int main ()
{
long long n,a,b,m,s,q;
scanf("%d%d%d",&n,&a,&b);
m=a+b-n;
s=a-m;
q=b-m;
printf("%d %d %d",m,q,s);
}
