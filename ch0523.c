#include <stdio.h>
#include <ctype.h>
void main()
{
char str[20],c,r;
int len=0,i,flag=0;
printf("Enter String : ");
scanf("%[^\n]",str); /* gets(str); */
/* fflush(stdin); */
printf("Enter old character: ");
scanf("%c",&c);
/* fflush(stdin); */
printf("Enter new character: ");
scanf("%c",&r);
while(str[len]!='\0')
	{if(str[len]==c)
		{str[len]=r;}
	 len++;
	}
printf(“Result: %s",str);
}
