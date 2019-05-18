#include <stdio.h>
void main()
{
int i,n1,n2;
int isprime(int);
printf(“Enter two number: “);
scanf(“%d%d”,&n1, &n2);
for (i=n1; i<=n2; ++i)
	{
	if(isprime(i)==1)printf(“%d\t”,i);
	}
}
int isprime(int p)
{int i;
for(i=2; i<p/2; ++i)
	{if (p%i==0)return 0;
	}
return 1;
}
