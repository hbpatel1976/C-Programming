#include <stdio.h>
void main()
{
int n,ans;
int fact(int);
printf(“Enter n : “);
scanf(“%d”,&n);
ans=fact(n);
printf(“Factorial=%d”,ans);
}
int fact(int p)
{
int i,f=1;
for(i=1; i<=p; ++i)
	{
	f=f*i;
	}
return f;
}
