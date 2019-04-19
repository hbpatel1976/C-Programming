#include <stdio.h>
void main()
{
int i;

for (i=0; i<=10;)	
	{
	i++;

	if (i % 5 ==0) 
		{break;}
	printf(“%d\n”,i);
	}
printf(“Bye”);
}
