#include <stdio.h>
void main()
{
int num[5],sum=0,i;
printf(“Enter five numbers\n“);
for (i=0; i<=4; ++i)
	{
	scanf("%d",&num[i]);
	sum=sum+num[i];
	}
printf(“Addition= %d",sum);

}
