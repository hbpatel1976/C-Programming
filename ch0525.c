#include <stdio.h>
void main()
{
char s1[40],s2[20];
int len1,len2,i,j;
printf("Enter first string : ");
scanf("%s",s1);
printf("Enter second string : ");
scanf("%s",s2);
len1=0,len2=0;
while(s1[len1]!='\0'){len1++;}
while(s2[len2]!='\0'){len2++;}
for(j=0,i=len1; j<=len2; ++i,j++) {s1[i]=s2[j];}
printf("Resultant String: %s",s1);
}
