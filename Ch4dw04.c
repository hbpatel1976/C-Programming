#include <stdio.h>
void main()
{
int N, isPrime=1, k=2;
printf("Enter a number : ");
scanf("%d",&N);
do	{if (N % k == 0)
		{
		isPrime = 0;
		break;
		}
	k++;
	} while (k < N);
if (isPrime == 1)
	{printf(“Prime”);}
else 
	{printf(“Not Prime”);}
}
