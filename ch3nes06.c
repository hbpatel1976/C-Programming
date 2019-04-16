#include <stdio.h>
void main()
{
int a,b,c;
printf("Enter 3 Numbers : ");
scanf("%d%d%d",&a,&b,&c);
if(a>b)
	{
	if(a>c)	
		{printf("Max=%d",a);}
	else		
		{printf("Max=%d",c);}
	}
else
	{
	if(b>c)	
	 	{printf("Max=%d",b);}
	else	
		{printf("Max=%d",c);}
	}
printf("\nBye");
}