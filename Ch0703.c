#include <stdio.h>
#define N 5
struct student
	{int rollno;
	char name[20];
	float cpi;
	};
void main()
{struct student s[N]= {{12,"Sanjay",5.6},{30,"Vijay",8.0},
	{41,"Parimal",6.8},{53,"Pradip",8.7},{63,"Ashish",7.3}};
int i;
for(i=0; i<N; ++i)
	{printf("\nRollno = %d",s[i].rollno);
	printf("\tName = %s",s[i].name);
	printf("\tCPI = %f",s[i].cpi);
	}
}
