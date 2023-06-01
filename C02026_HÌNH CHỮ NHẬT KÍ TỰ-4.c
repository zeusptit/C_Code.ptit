#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int min(int a,int b)
{
	if (a<b) return a;
	else return b;
}
int max(int a,int b)
{
	if (a>b) return a;
	else return b;
}
int main() {
	int r,c;
	int n,m;
	int i,j;
	scanf("%d %d", &n, &m);
	for(i = n; i >= 1; i--)
	{
		if(i >= m)
		{
			 for( j = 1; j <= m; j++) printf("%c", 64+m);
		}
			else
		{
			int init = i;
			for(j = 1; j <= m; j++)
			{
				if(init >= m) printf("%c", 64+m);
				else printf("%c", 64+init);
				init++;
			}
		}
		printf("\n");
	}
}

