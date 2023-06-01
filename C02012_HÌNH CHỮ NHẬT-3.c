#include <stdio.h>
#include <stdlib.h>

int main() {
	int m,n;
	scanf("%d%d",&m,&n);
	int i,j,k;
	int dem;
	for (i=1;i<=m;i++)
	{
		printf("%d",i);
		dem=1;
		j=i-1;
		while (j>0&&dem<n)
		{
			printf("%d",j);
			j--;dem++;
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
