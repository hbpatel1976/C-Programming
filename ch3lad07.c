#include <stdio.h>
void main()
{
int m=89;
if(m>=0 && m<=34)	
	{printf("FAIL");}
else if(m>=35 && m<=59)	
	{printf("PASS CLASS");}
else if(m>=60 && m<=79)
	{printf("FIRST CLASS");}
else if(m>=80 && m<=100)
	{printf("DISTINCTION");}
else 
	{printf("INVALID MARKS");}
printf("\nBye");
}
