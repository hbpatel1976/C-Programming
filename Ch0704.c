#include <stdio.h>
#define N 5
struct student
	{int rollno;
	char name[20];
	float cpi;
	};
void main()
{struct student s1 = {12,"Sanjay",5.6}, s2;
struct student change(struct student);
printf("Before Calling Function\n");
printf("Number=%d\tName=%s\tCPI=%f\n",s.rollno,s.name,s.cpi);
printf("After Calling Function\n");
printf("Number=%d\tName=%s\tCPI=%f\n",s.rollno,s.name,s.cpi);
}
struct student change(struct student t)
	{
	t.rollno++;
	t.cpi-=1;
	return t;
	}
