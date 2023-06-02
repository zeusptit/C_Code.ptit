#include <stdio.h>
#include <stdlib.h>

int main ()
{

	int m,n;
	scanf("%d%d",&m,&n);
	int i,j,k;
	int dem;
	for (i=1;i<=m;i++)
	{
		printf("%d",i);
		dem=1;j=i+1;
		if(j<=n)
		{
			for(k=j;k>=1;k--)
			{
				printf("%d",k);
				dem++;
			}
		}
		int t=2;
		while(dem<n)
		{
			printf("%d",t);
		    t++;
		    dem++;
		}
		printf("\n");
	}
}

