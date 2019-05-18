#include <stdio.h>
void main()
{
int len=0,count=1;
char str[20];
printf("Enter a string : ");
scanf("%[^\n]",str); /* gets(str); */
while(str[len]!='\0')
	{
	if(str[len]==‘  ’){count++;}
	len++;
	}
printf(“String Length: %d",len);
printf("Words : %d",count);
}

