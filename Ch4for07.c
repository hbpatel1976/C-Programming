#include <stdio.h>
void main()
{
int i;
for (i=1; i<=90; ++i)
	{
	if(i%5==0 && i%7==0)
		{
		printf("%d\n",i);
		}
	i ++;
	}
}