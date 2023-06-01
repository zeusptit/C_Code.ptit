#include <stdio.h>
#include <stdlib.h>

int main() {
	int m,n,a,b,t;
	scanf("%d%d",&m,&n);
	int i,j,k;
	int dem,max;
	max=m;
	if (max<n) max=n;
	for (i=1;i<=m;i++)
	{
		dem=0;
		j=max-i+1;
		while (dem<n&&j>0)
		{
			printf("%d",j);
			dem++;
			j--;
		}
		j=2;
		while (dem<n)
		{
			printf("%d",j);
			j++;
			dem++;
		}
		printf("\n");
	}
}
