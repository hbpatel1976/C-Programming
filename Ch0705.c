#include <stdio.h>
struct student
	{
	int rollno;
	char name[20];
	float cpi;
	struct date_of_birth
		{
		int dd,mm,yy;
		}dob;
	};
void main()
{
struct student s={10,"Hiren",9.5,{14,2,1976}};

printf("Number=%d\tName=%s\tCPI=%f\n",s.rollno,s.name,s.cpi);
printf("Date of Birth (%d-%d-%d)",s.dob.dd,s.dob.mm,s.dob.yy);
}
