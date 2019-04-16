#include <stdio.h>
void main()
{
int num,sum=0,i=1;
printf(“Enter five numbers\n“);
do	
	{
	scanf("%d",&num);
	sum=sum+num;
	i ++;
	}
while (i<=5);
printf("Average = %f",sum/5.0);
}