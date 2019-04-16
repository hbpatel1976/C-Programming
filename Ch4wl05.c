#include <stdio.h>
void main()
{
int i=1,n,sum=0;
printf("Enter n : ");
scanf("%d",&n);
while(i<=n)
	{
	sum=sum+i;
	i++;
	}
printf("Sum = %d\n",sum);
}