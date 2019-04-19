#include <stdio.h>
void main()
{
int i=0;

while (i <= 10)
	{
	i++;
	if (i % 5 ==0) 
		{continue;}
	printf(“%d\n”,i);
	}

printf(“Bye”);
}
