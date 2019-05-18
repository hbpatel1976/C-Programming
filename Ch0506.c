#include <stdio.h>
void main()
{
int num[10],i,min=0,n;
printf("Total elements? ");
scanf("%d",&n);
printf("Enter elements\n");
for(i=0; i<n; ++i)
   {
   scanf("%d",&num[i]);
   if(num[i]<min)
        {
        min=num[i];
        }
   }
printf(“Min=%d",min);
}
