#include <stdio.h>
void main()
{
void printline(void); 
printf(“Hello From Main\n”);
printLine();
printf(“Hi From Main\n”);
printLine();
}
void printLine (void)
{
int i;
for (i=1; i<=20; ++i)
	{
	printf(“-”);
	}
}
