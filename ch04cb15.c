#include <stdio.h>
void main()
{
int i, num, sum=0;
for (i=1;; ++i)
	{
	 printf(“Enter number #%d: ”, i);
	scanf(“%d”,&num);
	if(num < 0)
		{
		i--;
		break;
		}
	sum = sum + num;
	}
printf(“Average = %d”, sum/i);
}
