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
	char i='a';
	i=i+max(r,c)-1;
	char dau=i;
	int k,j;
	for (k=1;k<=r;k++)
	{
		i=dau;
		printf("%c",dau);
		for (j=1;j<k;j++)
		{
			if (j>c-1) break;
			i--;
			printf("%c",i);

		}
		while (j<c)
		{
			printf("%c",i);j++;
		}
		printf("\n");
	}
}




