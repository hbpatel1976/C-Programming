#include <stdio.h>
void main()
{
int factorial(void); 
int ans;
ans = factorial();
printf(“%d”,ans);
}
int factorial(void)
{
int i, fact=1, p;
printf(“Enter number : “);
scanf(“%d”,&p);
for (i=1; i<=p; ++i)
	{
	fact=fact*i;
	}
return fact;
}
