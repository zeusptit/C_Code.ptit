#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int max(int a,int b)
{
	if (a>b) return a;
	else return b;
}
int main() {
	int r,c;
	scanf("%d%d",&r,&c);
	char i='A';
	char dau=i;
	int j,k;
	for (j=1;j<=c;j++)
	{
		printf("%c",i);
		i++;
	}
	printf("\n");
	char max=i;
	max--;
	for (j=1;j<r;j++)
	{
		if (j>=c)
		{
			i=max;
			while (i>='A')
			{
				printf("%c",i);
				i--;
			}
		}
		else
		{
		i=dau+j;
		for (k=1;k<=c-j;k++)
		{
			printf("%c",i);
			i++;
		}
		if (k<=c)
		{
			i=dau+j-1;
			while (k<=c)
			{
				printf("%c",i);
				i--;
				if (i<'A') i='A';
				k++;
			}
		}
		}
		printf("\n");
	}
}

