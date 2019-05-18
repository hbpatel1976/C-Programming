#include <stdio.h>
void main()
{
void printline(int); 
int n=20;
printf(“Hello From Main\n”);
printLine(15);
printf(“Hi From Main\n”);
printLine(n);
}
void printLine (int p)
{
int i;
for (i=1; i<=p; ++i)
	{
	printf(“-”);
	}
}
