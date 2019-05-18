#include <stdio.h>
void main()
{
int a[10],i,n,even=0,odd=0;
printf("Total elements? ");
scanf("%d",&n);
printf("Enter elements\n");
for(i=0; i<n; ++i)
     {
     scanf("%d",&a[i]);
     if(a[i]%2==0){even++;}
     else	{odd++;}
     }
printf("Even = %d\n”,even);
printf("Odd = %d\n”,odd);
}
