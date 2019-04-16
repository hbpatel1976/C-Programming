#include <stdio.h>
void main()
{
int N, sum=0, digit;
printf("Enter a number : ");
scanf("%d",&N);
for( ; N>0; N=N/10)
	{
	digit = N % 10;
	sum = sum + digit;
	}
printf (“Answer  = %d”, sum);
}
