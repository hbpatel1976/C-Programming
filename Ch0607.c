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
	static int x=20;  /* static */
	printf("From function : x = %d\n",x);
	x++;
	}
