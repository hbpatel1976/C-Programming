#include <stdio.h>
void main()
{
int n,s;
int addn(int);
printf(“Enter n : “);
scanf(“%d”,&n);
s=addn(n);
printf(“sum=%d”,s);
}
int addn(int p)
{
int i,sum=0;
for(i=1; i<=p; ++i)
	{
	sum=sum+i;
	}
return sum;
}
