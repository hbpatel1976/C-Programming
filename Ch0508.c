#include <stdio.h>
void main()
{int m[10],i,pos=0,neg=0, zero=0, n;
printf("Total numbers? ");
scanf("%d",&n);
printf("Enter elements");
for(i=0; i<n; ++i)
      {
       scanf("%d",&m[i]);
       if(m[i]>0)pos++;
       else if(m[i]<0)neg++;
       else zero++;
      }
printf("Positive= %d\n",pos);
printf("Negative= %d\n",neg);
printf("Zero = %d\n",zero);
}
