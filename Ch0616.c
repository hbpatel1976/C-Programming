#include <stdio.h>
void main()
{
int n,status;
int isprime(int);
printf(“Enter number : “);
scanf(“%d”,&n);
status =isprime(n);
if(status==1)printf(“Prime”);
else printf(“Not Prime”);
}
int isprime(int p)
{int i;
for(i=2; i<p/2; ++i)
	{if (p%i==0)return 0;
	}
return 1;
}
