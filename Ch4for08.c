#include <stdio.h>
void main()
{
int num,sum=0;
printf("Enter a number : ");
scanf("%d",&num);
for (; num>0; num = num / 10)
	{
	sum=sum*10+num%10;
	}
printf("Reverse = %d",sum);
}