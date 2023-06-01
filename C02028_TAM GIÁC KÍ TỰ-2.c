#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int n;
	scanf("%d",&n);
	int i;int d=0;
	while (n>0)
	{

		for (i=1;i<=n;i++)
		{
			printf("%c",63+d+2*i);
		}
		printf("\n");
		d=d+2;
		n--;
	}
}

