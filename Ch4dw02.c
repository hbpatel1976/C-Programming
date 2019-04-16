#include <stdio.h>
void main()
{
int n, fact = 1, k = 1;
printf("Enter n for n! : ");
scanf("%d", &n);
do	
	{
	fact = fact * k;
	k ++;
	}
while(k <= n);
printf("Factorial = %d", fact);
}
