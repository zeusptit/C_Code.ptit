#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int t;
	scanf("%d",&t);
	while (t--)
	{
		int n;
		scanf("%d",&n);
		int a[n];
		int i;
		for (i=0;i<n;i++) scanf("%d",&a[i]);
		int j,max,kt;
		int dem=0;
		for (i=0;i<n;i++)
		{
			max=a[i];kt=1;
			for (j=0;j<i;j++) if (a[j]>max&&kt==1) kt=0;
			if (kt==1) dem++;
		}
		printf("%d",dem);
		printf("\n");
	}
}
