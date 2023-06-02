#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n;
	scanf("%d",&n);
	int i,j = 2,k,l = 1,m;
	for(i=1;i<=n;i++)
	{
		if(i % 2 == 0)
			for(k=1;k<=i;k++)
			{
				printf("%d",j);
				j += 2;
			}
		if(i % 2 != 0)
			for(m=1;m<=i;m++)
			{
				printf("%d",l);
				l += 2;
			}
		printf("\n");
		l = 1;j = 2;
	}
	return 0;
}
