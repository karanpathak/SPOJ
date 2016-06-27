#include <stdio.h>

int main(void) {
long long p,n,ex=0;
scanf("%lld",&n);
while(n--)
{
scanf("%lld",&p);
ex^=p;
}
printf("%lld",ex);
	return 0;
}
