#include <stdio.h>
void main()
{
int num,sum=0,i;
printf(“Enter five numbers\n“);
for (i=1; i<=5; ++i)
	{
	scanf("%d",&num);
	sum=sum+num;
	}
printf("Average = %f",sum/5.0);
}