#include <stdio.h>
void main()
{
int marks[4][3], i,j,high = 0;
printf("Enter 3 students marks for 4 subjects\n");
for(i=0; i<4; ++i)
	{
	for(j=0; j<3; ++j)
		{scanf("%d",&marks[i][j]);
		if(marks[i][j]>high)
                          	         {high=marks[i][j];}
		}
	}
printf(“Highest Marks=%d”,high);
}
