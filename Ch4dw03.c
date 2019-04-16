#include <stdio.h>
void main()
{
int N, sum=0, digit;
printf("Enter a number : ");
scanf("%d",&N);
do	{
	digit = N % 10;
	sum = sum + digit;
	N = N / 10;
	}
while (N > 0);
printf (“Answer  = %d”, sum);
}