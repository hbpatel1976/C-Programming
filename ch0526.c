#include <stdio.h>
#include <string.h>
void main()
{char s1[20]="hello",s2[20]="India",s3[20];
printf("Length of s1 = %d\n",strlen(s1));
strcpy(s3,s1);
printf("s3 = %s\n",s3);
if(strcmp(s1,s2)==0)printf("s1 and s2 are equal\n");
else printf("s1 and s2 are not equal\n");
strcat(s1,s2);
printf("s1=%s\n",s1);
}
