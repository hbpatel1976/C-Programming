#include <stdio.h>
void main()
{
int i, j,k,n=5;
for (i=5; i>=1; --i)
     {
     for(k=1;k<=n-i; ++k)
          {printf(“ ”);
          }
     for(j=1; j<=i; ++j)
          {printf(“%d”,i);
          }
     printf(“\n”);
     }
}
