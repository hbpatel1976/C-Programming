#include <stdio.h>
void main()
{int ans,n1,n2;
int lcm(int, int);
printf(“Enter two number: “);
scanf(“%d%d”,&n1, &n2);
ans=lcm(n1, n2);
printf(“LCM = %d”,ans);
}
int lcm(int p, int q)
{int max;
if (p>q) max=p;
else max=q;
while (1)
	{if(max%p==0 && max%q==0){break;}
	max++;
	}
return max;
}
