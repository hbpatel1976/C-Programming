#include <stdio.h>
void main()
{
int n, fact = 1, k = 1;
printf("Enter n for n! : ");
scanf("%d", &n);
while(k <= n)
	{
	fact = fact * k;
	k ++;
	}
printf("Factorial = %d", fact);
}
