#include <stdio.h>
#include <ctype.h>
void main()
{
char str[20],c;
int len=0,i,count=0;
printf("Enter String :\n"); /* gets(str); */
scanf("%[^\n]",str);
while(str[len]!=‘\0’)
	{
	c=toupper(str[len]);
	if(c=='A'||c=='E'||c=='I'||c=='O'||c=='U'){count++;}
	len++; 
	}
printf("Vowels : %d",count);
}
