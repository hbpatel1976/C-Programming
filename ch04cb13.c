#include <stdio.h>
void main()
{
int i=1, marks, sum=0;
do	{
	 printf(“Enter marks #%d: ”, i);
	scanf(“%d”,&marks);
	if(marks > 100 || marks < 0)
		{
		i--;
		continue;
		}
	sum = sum + marks;
	i++;
	}
while (i<=10);
printf(“Average = %d”, sum/10);
}
