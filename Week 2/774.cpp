#include <stdio.h>
using namespace std;
int main(){
	long long a,b,r;
	scanf("%lld%lld%lld",&r,&a,&b);
	a*a+b*b<=4*r*r ? printf("YES") : printf("NO");
}
