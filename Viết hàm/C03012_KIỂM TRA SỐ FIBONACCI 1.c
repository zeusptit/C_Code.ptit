#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {
	int t;
	scanf("%d",&t);
	int i=1;
	int j=1;
	int k=0;
	int kt=0;
	while (k<t)
	{
		k=i+j;
		i=j;
		j=k;
		if (k==t) kt=1;
	}
	printf("%d",kt);
}




