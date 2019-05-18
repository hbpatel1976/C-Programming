#include <stdio.h>
void main()
{
int pascal[5][5],i,j;
for(i=0; i<=5; ++i)
	{
	for(j=0; j<=i; ++j)
		{
		if(i==j||j==0) {pascal[i][j]=1;}
		else {pascal[i][j]=pascal[i-1][j-1]+pascal[i-1][j];}
		printf("%3d",pascal[i][j]);
		}
	printf("\n");
	}
}
