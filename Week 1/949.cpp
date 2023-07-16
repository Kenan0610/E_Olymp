#include <stdio.h>
int main ()
{
long long  abcd,a,b,c,d;
	
	scanf("%lld",&abcd);
	a=abcd/1000;
	b=abcd/100%10;;
	c=abcd/10%10;
	d=abcd%10;
	printf("%lld",b*10+c);
	return 0;
	
}
