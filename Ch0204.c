#include <stdio.h>
void main()
{
int a=10, b=20;
if (a>5 || b<100) {printf("Condition 1 is TRUE\n");}
else	      {printf("Condition 1 is FALSE\n");}

if (a>15 || b<100){printf("Condition 2 is TRUE\n");}
else	      {printf("Condition 2 is FALSE\n");}

if (a>5 || b<10)  {printf("Condition 3 is TRUE\n");}
else	      {printf("Condition 3 is FALSE\n");}

if (a>15 || b<10) {printf("Condition 4 is TRUE\n");}
else	      {printf("Condition 4 is FALSE\n");}
}