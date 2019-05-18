#include <stdio.h>
struct test1
	{
	int x;
	char y;
	float z;
	};
union test2
	{
	int x;
	char y;
	float z;
	};
void main()
{
struct test1 t1;
union test2 t2;
printf("Size of structure = %d\n",sizeof(t1));
printf("Size of union = %d\n",sizeof(t2));
t1.x=10;
t1.y='Y';
t1.z=87.56;
t2.x=20;
t2.y='N';
t2.z=78.23;
printf("Structure : x=%d y=%c z=%4.2f\n",t1.x,t1.y,t1.z);
printf("Union : x=%d y=%c z=%4.2f\n",t2.x,t2.y,t2.z);
}
