#include <stdio.h>
void main()
{
int num,sum=0,i=1;
printf(�Enter five numbers\n�);
while (i<=5)
	{
	scanf("%d",&num);
	sum=sum+num;
	i ++;
	}
printf("Average = %f",sum/5.0);
}