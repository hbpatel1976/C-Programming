#include <stdio.h>
void main()
{
int len=0;
char str[20]=“I Love India”;

while(str[len]!='\0')
	{len++;}

printf("Length = %d",len);
}
