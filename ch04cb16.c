#include <stdio.h>
void main()
{
int i=1, num, sum=0;
do	{
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
while (1);
printf(“Average =%d ”, sum/i);
}
