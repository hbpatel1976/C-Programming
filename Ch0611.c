#include <stdio.h>
void main()
{
void change(int,int);
int x=10,y=20;
printf("Before Function : x=%d y=%d\n",x,y);
change(x,y);
printf("After Function : x=%d y=%d\n",x,y);
}
void change(int x, int y)
{
int temp;
temp=x;
x=y;
y=temp;
}
