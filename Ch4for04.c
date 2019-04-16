#include <stdio.h>
void main()
{
int N, isPrime=1, k;
printf("Enter a number : ");
scanf("%d",&N);
for(k=2; k<N; ++k)
{if (N % k == 0)
	{
	ifPrime = 0;
	break;
	}
}
if (isPrime == 1)
	{printf(“Prime”);}
else 
	{printf(“Not Prime”);}
}
