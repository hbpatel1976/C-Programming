#include <stdio.h>
void main()
{
int num[10],i,max=0,n;
printf("Total elements? ");
scanf("%d",&n);
printf("Enter elements\n");
for(i=0; i<n; ++i)
   {
   scanf("%d",&num[i]);
   if(num[i]>max)
        {
        max=num[i];
        }
   }
printf("Max=%d",max);
}
