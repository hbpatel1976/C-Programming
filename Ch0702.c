#include <stdio.h>
struct student
	{int rollno;
	char name[20];
	float cpi;
	};
void main()
{struct student s1={53,“Pradip",8.7};
printf(“Student 1\n”);
printf("Rollno = %d\nName = %s\nCPI = %f\n",s1.rollno,s1.name,s1.cpi);
printf(“Student 2\n”);
printf("Rollno = %d\nName = %s\nCPI = %f\n",s2.rollno,s2.name,s2.cpi);
}