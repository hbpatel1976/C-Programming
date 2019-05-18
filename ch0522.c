#include <stdio.h>
#include <string.h>
void main()
{
char str[20];
int i,count=0;
printf("Enter a string : \n");
scanf("%[^\n]",str); /* gets(str); */
for(i=0; i<strlen(str); ++i)
	{
	if(str[i]==‘h‘) {count++;}
	}
printf(“h occurs %d times",count);
}
