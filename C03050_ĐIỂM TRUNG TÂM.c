#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int n;
	scanf("%d",&n);
	int i,j,k;
	int a[100001]={0};
	for (i=1;i<n;i++)
	{
		scanf("%d%d",&k,&j);
		a[k]++;
		a[j]++;
	}
	int kt=0;
	for (i=0;i<=n;i++) if (a[i]==n-1) {
		kt=1;
		break;
	}
	if (kt==1) printf("Yes");
	else printf("No");
}



