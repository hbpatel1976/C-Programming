#include <stdio.h>
void main()
{
int i, marks, sum=0;
for (i=1; i<=10; ++i)
	{
	 printf(“Enter marks #%d: ”, i);
	scanf(“%d”,&marks);
	if(marks > 100 || marks < 0)
		{
		i--;
		continue;
		}
	sum = sum + marks;
	}
printf(“Average =%d”, sum/10);
}
