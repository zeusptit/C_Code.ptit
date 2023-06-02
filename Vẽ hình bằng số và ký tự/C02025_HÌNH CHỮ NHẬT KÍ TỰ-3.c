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
	char j,k;
	printf("@");
	for (j=1;j<c;j++)
	{
		printf("%c",i);
		i++;
	}
	printf("\n");
	char max=i;
	max--;
	int t;
	for (t=1;t<r;t++)
	{
		i=dau+t-1;
		int d=0;
		while (i<max)
		{
			printf("%c",i);
			i++;
			d++;
		}
		while (d<c)
		{
			printf("%c",max);
			d++;
		}
		printf("\n");
	}
}
