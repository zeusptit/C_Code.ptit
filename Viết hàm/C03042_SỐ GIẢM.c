#include <stdio.h>
#include <stdlib.h>

int kiemtra(int m)
{
	int temp=-1;
	while (m!=0)
	{
		if (m%10>temp)
		{
			temp=m%10;
			m=m/10;
		} 
		else return 0;
	}
	return 1;
}
int main() {
	int n;
	scanf("%d",&n);
	int i,a,b;
	unsigned long long int m;
	for (i=1;i<=n;i++)
	{
		scanf("%d%d",&a,&b);
		int j;
		int dem=0;
		for (j=a;j<=b;j++) if (kiemtra(j)==1) dem++;
		printf("%d\n",dem);
	}
}

