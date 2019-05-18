#include <stdio.h>
void main()
	{
	void function(void);
	function();
	function();
	function();
	}

void function(void)
	{
	int x=20;  /* local */
	printf("From function : x = %d\n",x);
	x++;
	}
