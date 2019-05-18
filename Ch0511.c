#include <stdio.h>
void main()
{
int a[10],n,i,j,temp;
printf("Total elements? ");
scanf("%d",&n);
printf("Enter elements");
for(i=0; i<n; ++i) {scanf("%d",&a[i]);}
for(i=0; i<=n-2; ++i)
	{for(j=i+1; j<=n-1; ++j)
		{if(a[i]>a[j])
			{temp=a[i];
			a[i]=a[j];
			a[j]=temp;
			}
		}
	}
printf("Sorted List\n");
for(i=0; i<n; ++i) {printf("%d\t",a[i]);}
}
