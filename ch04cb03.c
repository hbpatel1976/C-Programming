#include <stdio.h>
void main()
{
int i=0;

do	{
	i++;
	if (i % 5 ==0) 
		{continue;}
	printf(“%d\n”,i);
	}
while (i <= 10);

printf(“Bye”);
}
