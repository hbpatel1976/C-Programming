#include <stdio.h>
void main()
{
int N, sum=0, digit;
printf("Enter a number : ");
scanf("%d",&N);
while (N > 0)
	{
	digit = N % 10;
	sum = sum + digit;
	N = N / 10;
	}
printf (“Answer  = %d”, sum);
}
