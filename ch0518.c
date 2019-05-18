#include <stdio.h>
#include <string.h>
void main()
{
char str[10]="India";
int i;
for (i=0; i<strlen(str); i++)
   {
   printf(“%c\n”,str[i]);
   }
printf(“%s\n”,str);
}
