#include <stdio.h>
void main()
{
int n, fact = 1, k;
printf("Enter n for n! : ");
scanf("%d", &n);
for (k=1; k<=n; ++k)	
	{
	fact = fact * k;
	k ++;
	}
printf("Factorial = %d", fact);
}