#include <stdio.h>
#define N 5
void main()
{
int a[N]={10,20,30,40,50},i;
void change(int[N]);
printf("Before Calling Function\n");
for(i=0; i<N; ++i)
	{printf("%d\t",a[i]);}
change(a);
printf("\nAfter Calling Function\n");
for(i=0; i<N; ++i)
	{printf("%d\t",a[i]);}
}
void change(int b[N])
{
int i;
for(i=0; i<N; ++i)
	{b[i]++;}
}
