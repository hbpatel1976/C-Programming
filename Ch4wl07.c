#include <stdio.h>
void main()
{
int i=1;
while (i<=90)
	{
	if(i%5==0 && i%7==0)
		{
		printf("%d\n",i);
		}
	i ++;
	}
}