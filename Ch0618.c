#include <stdio.h>
void main()
{
int ans,n1,n2;
int gcd(int, int);
printf(“Enter two number: “);
scanf(“%d%d”,&n1, &n2);
ans=gcd(n1, n2);
Printf(“GCD = %d”,ans);
}
int gcd(int p, int q)
{
while (p != q)
	{
	if (p > q) p = p – q;
	else q = q – p;
	}
return p;
}
