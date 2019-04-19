#include <stdio.h>
void main()
	{
	int a=20,b=10,c;
	c=a;
	printf("c=%d\n",c);
	c+=a; 
	printf("c=%d\n",c);
	c-=b; 
	printf("c=%d\n",c);
	c*=a; 
	printf("c=%d\n",c);
	c/=b; 
	printf("c=%d\n",c);
	c%=b;
	printf("c=%d\n",c);
	}