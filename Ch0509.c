#include <stdio.h>
void main()
{
int a[5],b[5],c[5],i,n;
printf("Total Elements: ");
scanf("%d",&n);
printf("Elements of A: ”);
for(i=0; i<n; ++i)
	{scanf("%d",&a[i]);}
printf("Elements of B:   ");
for(i=0; i<n; ++i)
	{scanf("%d",&b[i]);}
for(i=0; i<n; ++i)
	{c[i]=a[i]+b[i];}
printf("Array C: ");
for(i=0; i<n; ++i)
	{printf("%d\t",c[i]);}
}
