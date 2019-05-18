#include <stdio.h>
void main()
{
int factorial(int); 
int n=5,ans;
ans = factorial(n);
printf(“%d”,ans);
}
int factorial(int p)
{
int i, fact=1;
for (i=1; i<=p; ++i)
	{
	fact=fact*i;
	}
return fact;
}
