#include <stdio.h>
void main()
{
int num,sum=0;
printf("Enter a number : ");
scanf("%d",&num);
while(num>0)
	{
	sum=sum*10+num%10;
	num=num/10;
	}
printf("Reverse = %d",sum);
}