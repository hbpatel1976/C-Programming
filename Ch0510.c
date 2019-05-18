#include <stdio.h>
void main()
{
int a[5],i,n,item;
printf("Total Elements: ");
scanf("%d",&n);
printf("Enter Elements: ");
for(i=0; i<n; ++i)
	{scanf("%d",&a[i]);}
printf("Enter search item");
scanf("%d",&item);
for(i=0; i<n; ++i)
	{if(a[i]==item)
	      {
	      printf("Item Found");
	      return;
	      }
	}
printf("Item Not Found");
}
