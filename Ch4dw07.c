#include <stdio.h>
void main()
{
int i=1;
do
	{
	if(i%5==0 && i%7==0)
		{
		printf("%d\n",i);
		}
	i ++;
	}
while (i<=90);
}