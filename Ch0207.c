#include <stdio.h>
void main()
{
int a=22,b=8,c;
c=a++; /* First, c=a; then a++; */
printf("c=%d\t",c);
printf("a=%d\t",a);
c=--b; /* First, --b; then c=b; */
printf("c=%d\t",c);
printf("b=%d\t",b);
}