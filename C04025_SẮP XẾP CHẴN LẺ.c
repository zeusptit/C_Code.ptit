#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n;
	scanf("%d",&n);
	int A[100],i,j;
	for(i=0;i<n;i++)scanf("%d",&A[i]);
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
			if(A[i] >= A[j])
			{
				int temp = A[i];
				A[i] = A[j];
				A[j] = temp;
			}
		}
	}
	for(i=0;i<n;i++)if(A[i] % 2 == 0)printf("%d ",A[i]);
	for(i=0;i<n;i++)if(A[i] % 2 != 0)printf("%d ",A[i]);
	return 0;
}
