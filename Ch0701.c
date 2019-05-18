#include <stdio.h>
struct student
	{
	int rollno;
	char name[20];
	float cpi;
	};
void main()
	{
	struct student s={53,“Pradip",8.7};
	printf("Rollno = %d\n",s.rollno);
	printf("Name = %s\n",s.name);
	printf(“CPI = %f",s.cpi);
	}
