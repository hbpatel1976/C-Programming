#include <stdio.h>
void main()
{
int i=1, num, sum=0;
while (1)
	{
	 printf(“Enter number #%d: ”, i);
	scanf(“%d”,&num);
	if(num < 0)
		{
		i--;
		break;
		}
	sum = sum + num;
	i++;
	}
printf(“Average = %d”, sum/i);
}
