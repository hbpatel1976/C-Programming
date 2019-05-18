#include <stdio.h>
int x = 20;
void main()
	{
	void function(void);
	printf("From main : x = %d\n",x);
	x++;
	function();
	printf("From main : x = %d\n",x);
	x++;
	function();
	}
void function(void)
	{
	printf("From function : x = %d\n",x);
	x++;
	}
