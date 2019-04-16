#include <stdio.h>
void main()
{
int count;
printf("Enter count : ");
scanf("%d",&count);
do	{
	printf(“Hello\n");
	count - -;
	}
while(count>0);
printf("Bye");
}