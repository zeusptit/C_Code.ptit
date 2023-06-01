#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int test;
	scanf("%d",&test);
	while(test--)
	{
		int n;
		scanf("%d",&n);
		int A[n];
		int i,j;
		for(i=0;i<n;i++)scanf("%d",&A[i]);
		for(i=0;i<n;i++)
		{
			int kt=1;
			for(j=i+1;j<n;j++)
			{
				if(A[i] <= A[j])
				{
					kt = 0;
					break;
				}
			}
			if(kt == 1)printf("%d ",A[i]);
		}
		printf("\n");
	}
	return 0;
}
