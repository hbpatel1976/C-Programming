#include <stdio.h>
#define N 5
void main()
{
float average(float[]);
float avg, number[N] = {12.5, 23.6, 43.9, 87.34, 76.45};
avg = average(number); 
printf("Average = %.f", avg);
}
float average(float num[])
{
int i;
float ans, sum = 0.0;
for (i =0; i <N; ++i) 
	{
	sum += num[i];
	}
ans = (sum / N);
return ans;
}
